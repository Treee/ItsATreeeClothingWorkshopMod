class SRP_LabTubeRack extends ItemBase
{
  bool IsSlotFilled(string slotName) {
    return FindAttachmentBySlotName(slotName) != null;
  }

  bool IsSlotFilledWithColor(string slotName, string color) {
    SRP_LabTube_Colorbase labtube = SRP_LabTube_Colorbase.Cast(FindAttachmentBySlotName(slotName));
    if (labtube) {
      // Print("lab tube color: " + labtube.GetType() + " " + labtube);
      if (labtube.GetType() == "SRP_LabTube_Clear" && color == "clear") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Blue" && color == "blue") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Red" && color == "red") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Green" && color == "green") {
        return true;
      } else if (labtube.GetType() == "SRP_LabTube_Yellow" && color == "yellow") {
        return true;
      }
    }
    return false;
  }

  bool IsCocainePuzzleSolved() {
    bool slot1 = IsSlotFilledWithColor("TestTube5", "green") || IsSlotFilledWithColor("TestTube5", "clear") || IsSlotFilledWithColor("TestTube5", "green");
    bool slot2 = IsSlotFilledWithColor("TestTube3", "blue") || IsSlotFilledWithColor("TestTube3", "red") || IsSlotFilledWithColor("TestTube3", "clear");
    bool slot4 = IsSlotFilledWithColor("TestTube4", "red") || IsSlotFilledWithColor("TestTube4", "blue") || IsSlotFilledWithColor("TestTube4", "green");
    bool slot5 = IsSlotFilledWithColor("TestTube1", "clear") || IsSlotFilledWithColor("TestTube1", "green") || IsSlotFilledWithColor("TestTube1", "yellow");
    return slot1 && slot2 && slot4 && slot5;
  }

  void ApplyTestTubeUsageDamage()
  {
    SRP_LabTube_Colorbase labtube;
    for(int i = 1; i < 6; i++) // start at 1 then go until 5 (not inclusive of 6)
		{
      string slotName = "TestTube"+i;
      labtube = SRP_LabTube_Colorbase.Cast(FindAttachmentBySlotName(slotName));
      if (labtube)
      {
        // labtube.AddHealth(-10); // 10 damage per use
        labtube.AddQuantity(-10); // 10 damage per use
      }
    }
  }
};

class SRP_LabTube_Colorbase extends ItemBase{};
class SRP_LabTube_Clear extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Blue extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Red extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Green extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Yellow extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquid extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidBlood extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidDisinfected extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidAntibiotic extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidSterilized extends SRP_LabTube_Colorbase
{
  float m_RadiationExposure = 0;
  float m_MaxExposure = 600;

  void UpdateRadiationExposure(PlayerBase m_Player, float change)
  {
    if (m_RadiationExposure > -1)
    {
      m_RadiationExposure += change;
    }
    // Print("Radiation: " + m_RadiationExposure);
    if (m_RadiationExposure >= m_MaxExposure)
    {
      TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(this, "SRP_LabTube_MutantLiquidSterilizedIrradiated", m_Player);
      lambda.SetTransferParams(true, true, true, false, GetQuantity());
      m_Player.ServerReplaceItemInHandsWithNew(lambda);		
    }
  }

  float GetRadiationExposure()
  {
    return m_RadiationExposure;
  }

  void SetRadiationExposure(float value)
  {
    m_RadiationExposure = value;
  }
};
class SRP_LabTube_MutantLiquidSterilizedIrradiated extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidSterilizedIrradiatedNeutral extends SRP_LabTube_Colorbase{};

class SRP_LabTube_MutantLiquidClamIchor extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidFishIchor extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidBatteryAcid extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidIron extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidPureAdrenaline extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidFat extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidMint extends SRP_LabTube_Colorbase{};
class SRP_LabTube_MutantLiquidAmanita extends SRP_LabTube_Colorbase{};

class SRP_LabTube_Kuru extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Salmonella extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Influenza extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Cholera extends SRP_LabTube_Colorbase{};
class SRP_LabTube_StomachVirus extends SRP_LabTube_Colorbase{};
class SRP_LabTube_Bacteria extends SRP_LabTube_Colorbase{};