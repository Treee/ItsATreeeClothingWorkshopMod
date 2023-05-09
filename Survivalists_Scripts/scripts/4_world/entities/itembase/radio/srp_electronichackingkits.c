modded class ElectronicRepairKit
{
  override int GetTrasformerRepairValue()
  {
    return Math.RandomIntInclusive(25,45);
  }
  override void SetActions()
  {
    super.SetActions();
    AddAction(SRP_ActionRepairOilRigPump);    
  }
};

modded class SRP_ElectronicsJammer_Base
{
  bool HasHackingKitAttached()
  {
    if (GetItemOnSlot("SRP_HackingKit1") || GetItemOnSlot("SRP_HackingKit2") || GetItemOnSlot("SRP_HackingKit3") || GetItemOnSlot("SRP_HackingKit4"))    
      return true;
    return false;
  }

  int GetPriorityHackingKitCurrent()
  {
    TireRepairKit_ElectronicsKit_ColorBase hackingKit;
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit4")))
      return hackingKit.GetMeterRead();
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit3")))
      return hackingKit.GetMeterRead();
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit2")))
      return hackingKit.GetMeterRead();
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit1")))
      return hackingKit.GetMeterRead();
    return -1;
  }

  ItemBase GetPriorityHackingKit()
  {
    ItemBase hackingKit;
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit4")))
      return hackingKit;
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit3")))
      return hackingKit;
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit2")))
      return hackingKit;
    if (Class.CastTo(hackingKit, GetItemOnSlot("SRP_HackingKit1")))
      return hackingKit;
    return NULL;
  }

  void RemovePriorityHackingKit()
  {    
    ItemBase wire;
    if (Class.CastTo(wire, GetItemOnSlot("SRP_ElectricalWire1")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_ElectricalWire2")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_ElectricalWire3")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_ElectricalWire4")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_ElectricalWire5")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_ElectricalWire6")))
      wire.Delete();

    ItemBase hackingKit;
    if (Class.CastTo(hackingKit, GetPriorityHackingKit()))
      hackingKit.Delete();
  }

  bool IsSolved()
  {
    ItemBase wire1;
    if (!Class.CastTo(wire1, GetItemOnSlot("SRP_ElectricalWire1")))
      return false;
    ItemBase wire2;
    if (!Class.CastTo(wire2, GetItemOnSlot("SRP_ElectricalWire2")))
      return false;
    ItemBase wire3;
    if (!Class.CastTo(wire3, GetItemOnSlot("SRP_ElectricalWire3")))
      return false;
    ItemBase wireMultiplier;
    if (!Class.CastTo(wireMultiplier, GetItemOnSlot("SRP_ElectricalWire4")))
      return false;
    ItemBase wireTempCoefficient;     
    if (!Class.CastTo(wireTempCoefficient, GetItemOnSlot("SRP_ElectricalWire5")))
      return false;
    ItemBase wireTolerance;
    if (!Class.CastTo(wireTolerance, GetItemOnSlot("SRP_ElectricalWire6")))
      return false;
    TireRepairKit_ElectronicsKit_ColorBase hackingKit;
    if (!Class.CastTo(hackingKit, GetPriorityHackingKit()))
      return false;

    string number = string.Format("%1%2%3", wire1.GetResistorDigit(), wire2.GetResistorDigit(), wire3.GetResistorDigit());      
    int wireResistance = number.ToInt() * (Math.Pow(10, wireMultiplier.GetResistorDigit()) / 100); // 10KOhms
    int toleranceDelta = hackingKit.GetCurrentRequirement() * hackingKit.GetErrorTolerance();
    // we are within range of tolerance
    int lowerTolerance = hackingKit.GetCurrentRequirement() - toleranceDelta;
    int upperTolerance = hackingKit.GetCurrentRequirement() + toleranceDelta;
    if (wireResistance < lowerTolerance || wireResistance > upperTolerance)
      return false;
    if (wireTempCoefficient.GetResistorTemperaturCoeffcient() < hackingKit.GetTemperatureCoefficientRequirement())
      return false;
    if (wireTolerance.GetResistorTolerance() > hackingKit.GetErrorTolerance())
      return false;
    return true;
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
    m_RequiredCurrent = digits.ToInt() * (Math.Pow(10, power) / 100); // 10KOhms
    // pick random tolerance from list
    m_ErrorTolerance = GetErrorTolerances().GetRandomElement();
    m_RequiredTemperatureCoefficient = GetTemperatureCoefficients().GetRandomElement();
    // Print(string.Format("digits: %1 number: %2 power: %3 multiplier: %4 requiredCurrent: %5 tolerance: %6 tempcoef: %7 type: %8", digits, digits.ToInt(), power, Math.Pow(10, power), m_RequiredCurrent, m_ErrorTolerance, m_RequiredTemperatureCoefficient, GetType()));
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
