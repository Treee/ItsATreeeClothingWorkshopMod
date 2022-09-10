modded class ElectronicRepairKit
{
  override void SetActions()
  {
    super.SetActions();
    AddAction(ActionSRPHackSecurityDoor);
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


  // bool CanRemoveHackingKit()
  // {
  //   string slotName = "SRP_HackingKit";
  //   ItemBase hackingKit;
  //   ItemBase wire;
  //   bool canRemove = true;
  //   for(int i = 4; i > 0;  i--)
  //   {
  //     hackingKit = GetItemOnSlot(slotName+i);
  //     if (hackingKit)
  //     {
  //       TStringArray wireColors = hackingKit.GetSlotWireCombinations();
  //       TIntArray wireQuantities = hackingKit.GetSlotWireQuantities();
  //       int maxCount = hackingKit.GetRequiredWireCount();
  //       for (int w = 0; w<maxCount; w++)
  //       {
  //         wire = GetItemOnSlot("SRP_ElectricalWire"+w);
  //         if (wire)
  //         {
  //           canRemove &= hackingKit.GetSlotWireCombinations(w).Contains(wire.GetColor());
  //         }
  //       }
  //     }
  //   }
  //   return canRemove;

  //   if (hackingKitSlot == "")
  //     return false;
    
  //   hackingkit = GetItemOnSlot(hackingKitSlot);
  //   Print("checking slot: " + "SRP_HackingKit"+i);
  //   TireRepairKit_ElectronicsKit_ColorBase kit = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingkit);
  //   if (kit)
  //   {
  //     bool canDiffuse = false;
  //     TStringArray wireColors = GetSlotWireCombinations();
  //     TIntArray wireQuantities = GetSlotWireQuantities();
  //     return kit.CanDiffuse();
  //   }
  //   return false;
  // }
  // void RemoveHackingKit()
  // {
  //   for(int i = 4; i > 0;  i--)
  //   {
  //     if (GetItemOnSlot("SRP_HackingKit"+i))
  //     {
  //     }
  //   }
  //   if (hackingKitSlot == "")
  //     return;

  //   hackingkit = GetItemOnSlot(hackingKitSlot);
  //   Print("checking slot: " + "SRP_HackingKit"+i);
  //   TireRepairKit_ElectronicsKit_ColorBase kit = TireRepairKit_ElectronicsKit_ColorBase.Cast(hackingkit);
  //   if (kit && kit.CanDiffuse())
  //   {
  //     this.Delete();
  //   }    
  // }
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
    return {0.01,0.02,0.005};
  }
  override int GetNumberOfDigits()
  {
    return 2;
  }
  override int GetMaxPower()
  {
    return 4;
  }
  override int GetMinPower()
  {
    return 0;
  }
};
class TireRepairKit_ElectronicsKit_Yellow extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.01,0.02,0.005};
  }
  override int GetNumberOfDigits()
  {
    return 2;
  }
  override int GetMaxPower()
  {
    return 5;
  }
  override int GetMinPower()
  {
    return 1;
  }
};
class TireRepairKit_ElectronicsKit_Red extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.01,0.02,0.005};
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
    return 6;
  }
  override int GetMinPower()
  {
    return 2;
  }
};
class TireRepairKit_ElectronicsKit_Blue extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.005,0.0025,0.0001};
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
};
class TireRepairKit_ElectronicsKit_Purple extends TireRepairKit_ElectronicsKit_ColorBase
{
  override TFloatArray GetErrorTolerances()
  {
    return {0.005,0.0025,0.0001};
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
};
