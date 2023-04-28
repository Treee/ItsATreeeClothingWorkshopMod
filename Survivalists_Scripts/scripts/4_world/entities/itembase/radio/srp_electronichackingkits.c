modded class ElectronicRepairKit
{
  override int GetTrasformerRepairValue()
  {
    return Math.RandomIntInclusive(25,45);
  }
  override void SetActions()
  {
    super.SetActions();
    AddAction(ActionSRPHackSecurityDoor);
    AddAction(SRP_ActionRepairOilRigPump);    
  }
};

modded class SRP_ElectronicsJammer_Base
{
  bool HasHackingKitAttached()
  {
    return (GetItemOnSlot("SRP_HackingKit1")||GetItemOnSlot("SRP_HackingKit2")||GetItemOnSlot("SRP_HackingKit3")||GetItemOnSlot("SRP_HackingKit4"));
  }

  int GetPriorityHackingKitCurrent()
  {
    ItemBase hackingKit;
    TireRepairKit_ElectronicsKit_ColorBase castedObj;
    hackingKit = GetItemOnSlot("SRP_HackingKit4");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj.GetMeterRead();
    }
    hackingKit = GetItemOnSlot("SRP_HackingKit3");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj.GetMeterRead();
    }

    hackingKit = GetItemOnSlot("SRP_HackingKit2");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj.GetMeterRead();
    }

    hackingKit = GetItemOnSlot("SRP_HackingKit1");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj.GetMeterRead();
    }
    return -1;
  }

  ItemBase GetPriorityHackingKit()
  {
    ItemBase hackingKit;
    TireRepairKit_ElectronicsKit_ColorBase castedObj;
    hackingKit = GetItemOnSlot("SRP_HackingKit4");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj;
    }
    hackingKit = GetItemOnSlot("SRP_HackingKit3");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj;
    }

    hackingKit = GetItemOnSlot("SRP_HackingKit2");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj;
    }

    hackingKit = GetItemOnSlot("SRP_HackingKit1");
    if (hackingKit)
    {
      castedObj = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingKit);
      return castedObj;
    }
    return null;
  }

  void RemovePriorityHackingKit()
  {    
    ItemBase wire1 = GetItemOnSlot("SRP_ElectricalWire1");
    if (wire1)
    {
      wire1.Delete();
    }
    ItemBase wire2 = GetItemOnSlot("SRP_ElectricalWire2");
    if (wire2)
    {
      wire2.Delete();
    }
    ItemBase wire3 = GetItemOnSlot("SRP_ElectricalWire3");
    if (wire3)
    {
      wire3.Delete();
    }
    ItemBase wire4 = GetItemOnSlot("SRP_ElectricalWire4");
    if (wire4)
    {
      wire4.Delete();
    }
    ItemBase wire5 = GetItemOnSlot("SRP_ElectricalWire5");
    if (wire5)
    {
      wire5.Delete();
    }
    ItemBase wire6 = GetItemOnSlot("SRP_ElectricalWire6");
    if (wire6)
    {
      wire6.Delete();
    }

    ItemBase hackingKit;
    hackingKit = GetItemOnSlot("SRP_HackingKit4");
    if (hackingKit)
    {
      hackingKit.Delete();
      return;
    }
    hackingKit = GetItemOnSlot("SRP_HackingKit3");
    if (hackingKit)
    {
      hackingKit.Delete();
      return;
    }

    hackingKit = GetItemOnSlot("SRP_HackingKit2");
    if (hackingKit)
    {
      hackingKit.Delete();
      return;
    }

    hackingKit = GetItemOnSlot("SRP_HackingKit1");
    if (hackingKit)
    {
      hackingKit.Delete();
      return;
    }
  }

  bool IsSolved()
  {
    bool isSolved = true;
    ItemBase wire1 = GetItemOnSlot("SRP_ElectricalWire1");        
    ItemBase wire2 = GetItemOnSlot("SRP_ElectricalWire2");        
    ItemBase wire3 = GetItemOnSlot("SRP_ElectricalWire3");        
    ItemBase wireMultiplier = GetItemOnSlot("SRP_ElectricalWire4");        
    ItemBase wireTempCoefficient = GetItemOnSlot("SRP_ElectricalWire5");        
    ItemBase wireTolerance = GetItemOnSlot("SRP_ElectricalWire6");   
    ItemBase hackingkitIB = GetPriorityHackingKit();     
    if (wire1 && wire2 && wire3 && wireMultiplier && wireTempCoefficient && wireTolerance && hackingkitIB)
    {
      TireRepairKit_ElectronicsKit_ColorBase hackingKit = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingkitIB);
      string number = string.Format("%1%2%3", wire1.GetResistorDigit(), wire2.GetResistorDigit(), wire3.GetResistorDigit());      
      int wireResistance = number.ToInt() * wireMultiplier.GetResistorMultiplier(); // 10KOhms
      
      int toleranceDelta = hackingKit.GetCurrentRequirement() * hackingKit.GetErrorTolerance();
      // we are within range of tolerance
      isSolved &= (wireResistance < (hackingKit.GetCurrentRequirement() + toleranceDelta) && wireResistance > (hackingKit.GetCurrentRequirement() - toleranceDelta));
      isSolved &= wireTempCoefficient >= hackingKit.GetTemperatureCoefficientRequirement();
      isSolved &= wireTolerance <= hackingKit.GetErrorTolerance();
    }
    else
    {
      isSolved &= false;
    }
    return isSolved;
  }
};

//https://learn.sparkfun.com/tutorials/resistors/all
class TireRepairKit_ElectronicsKit_ColorBase extends ElectronicRepairKit
{
  int m_RequiredCurrent = 0;
  int m_RequiredTemperatureCoefficient = 0;
  float m_ErrorTolerance = 0.0;
  void TireRepairKit_ElectronicsKit_ColorBase()
  {
    // pick two random numbers
    string digits = "";//string.Format("%1%2%3", Math.RandomIntInclusive(0,9),Math.RandomIntInclusive(0,9), Math.RandomIntInclusive(0,9));
    int tempInt;
    for(int i = GetNumberOfDigits(); i > 0; i--)
    {      
      digits = string.Format("%1%2",digits, Math.RandomIntInclusive(0,9));
    }
    // pick random number between 0 and 9
    int power = Math.RandomIntInclusive(GetMinPower(),GetMaxPower());
    // raise 10 to the power of the random number
    // multiply concat numbers by power of ten
    m_RequiredCurrent = digits.ToInt() * Math.Pow(10, power); // 10KOhms
    // pick random tolerance from list
    m_ErrorTolerance = GetErrorTolerances().GetRandomElement();
    m_RequiredTemperatureCoefficient = GetTemperatureCoefficients().GetRandomElement();
    // Print(string.Format("digits: %1 number: %2 power: %3 multiplier: %4 requiredCurrent: %5 tolerance: %6", digits, digits.ToInt(), power, Math.Pow(10, power), m_RequiredCurrent, m_ErrorTolerance));
  }
  override bool CanDetachAttachment (EntityAI parent)
	{
		return false;
	}  
  int GetCurrentRequirement()
  {
    return m_RequiredCurrent;
  }
  int GetTemperatureCoefficientRequirement()
  {
    return m_RequiredTemperatureCoefficient;
  }
  float GetErrorTolerance()
  {
    return m_ErrorTolerance;
  }
  TFloatArray GetErrorTolerances()
  {
    return {};
  }
  TIntArray GetTemperatureCoefficients()
  {
    return {};
  };
  int GetNumberOfDigits()
  {
    return 0;
  }
  int GetMaxPower()
  {
    return 0;
  }
  int GetMinPower()
  {
    return 0;
  }
  int GetMeterRead()
  {
    int toleranceDelta = GetCurrentRequirement() * GetErrorTolerance();
    if (Math.RandomIntInclusive(0,1) == 0)    
    {
      return Math.RandomIntInclusive(GetCurrentRequirement(), GetCurrentRequirement() + toleranceDelta);
    }
    else
    {
      return Math.RandomIntInclusive(GetCurrentRequirement() - toleranceDelta, GetCurrentRequirement());
    }
  }
};
class TireRepairKit_ElectronicsKit_Green extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.01,0.02};
  }
  override TIntArray GetTemperatureCoefficients()
  {
    return {15};
  }
  override int GetNumberOfDigits()
  {
    return 3;
  }
  override int GetMaxPower()
  {
    return 4;
  }
  override int GetMinPower()
  {
    return 0;
  }
  override int GetTrasformerRepairValue()
  {
    return Math.RandomIntInclusive(55,75);
  }
};
class TireRepairKit_ElectronicsKit_Yellow extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.01,0.02};
  }
  override TIntArray GetTemperatureCoefficients()
  {
    return {15};
  }
  override int GetNumberOfDigits()
  {
    return 3;
  }
  override int GetMaxPower()
  {
    return 5;
  }
  override int GetMinPower()
  {
    return 1;
  }
  override int GetTrasformerRepairValue()
  {
    return Math.RandomIntInclusive(65,90);
  }
};
class TireRepairKit_ElectronicsKit_Red extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.01,0.02};
  }
  override TIntArray GetTemperatureCoefficients()
  {
    return {50, 25};
  }
  override int GetNumberOfDigits()
  {
    return 3;
  }
  override int GetMaxPower()
  {
    return 5;
  }
  override int GetMinPower()
  {
    return 2;
  }
  override int GetTrasformerRepairValue()
  {
    return Math.RandomIntInclusive(90,125);
  }
};
class TireRepairKit_ElectronicsKit_Blue extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.005,0.0025,0.001};
  }
  override TIntArray GetTemperatureCoefficients()
  {
    return {50, 15, 25};
  }
  override int GetNumberOfDigits()
  {
    return 3;
  }
  override int GetMaxPower()
  {
    return 6;
  }
  override int GetMinPower()
  {
    return 3;
  }
  override int GetTrasformerRepairValue()
  {
    return Math.RandomIntInclusive(100,145);
  }
};
class TireRepairKit_ElectronicsKit_Purple extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.005,0.0025,0.001};
  }
  override TIntArray GetTemperatureCoefficients()
  {
    return {100, 50};
  }
  override int GetNumberOfDigits()
  {
    return 3;
  }
  override int GetMaxPower()
  {
    return 6;
  }
  override int GetMinPower()
  {
    return 4;
  }
  override int GetTrasformerRepairValue()
  {
    return Math.RandomIntInclusive(150,200);
  }
};
