class SRP_Handguard_Base extends M4_PlasticHndgrd
{
  override bool CanDetachAttachment(EntityAI parent)
	{
    if (super.CanDetachAttachment(parent))
    {
      if (parent.IsInherited(Weapon_Base))
      {
        if (parent.FindAttachmentBySlotName("RISLeft"))
          return false;
        if (parent.FindAttachmentBySlotName("RISRight"))
          return false;
        if (parent.FindAttachmentBySlotName("RISBottom"))
        return false;
      }
      return true;
    }
		return false;
	}
};

class ESP_LW_HndGrd_ColorBase extends SRP_Handguard_Base{};
class ESP_Lightweight_HndGrd_Green extends ESP_LW_HndGrd_ColorBase{};

class ESP_RIS_Plated_HndGrd_Long_ColorBase extends SRP_Handguard_Base{};
class ESP_PlatedRIS_HndGrd_Long_Tan extends ESP_RIS_Plated_HndGrd_Long_ColorBase{};

class ESP_RIS_Plated_HndGrd_ColorBase extends SRP_Handguard_Base{};
class ESP_PlatedRIS_HndGrd_Tan extends ESP_RIS_Plated_HndGrd_ColorBase{};

class ESP_RIS_Erg_HndGrd_ColorBase extends SRP_Handguard_Base{};
class ESP_RIS_Erg_HndGrd_Tan extends ESP_RIS_Erg_HndGrd_ColorBase{};
class ESP_RIS_Erg_HndGrd_Black extends ESP_RIS_Erg_HndGrd_ColorBase{};

class ESP_RIS_Erg_HndGrd_Long_ColorBase extends SRP_Handguard_Base{};
class ESP_RIS_Erg_HndGrd_Long_Tan extends ESP_RIS_Erg_HndGrd_Long_ColorBase{};
class ESP_RIS_Erg_HndGrd_Long_Black extends ESP_RIS_Erg_HndGrd_Long_ColorBase{};

class ESP_M16_HndGrd_ColorBase extends SRP_Handguard_Base{};
class ESP_M16_HndGrd_Wood extends ESP_M16_HndGrd_ColorBase{};
class ESP_M16_HndGrd_Black extends ESP_M16_HndGrd_ColorBase{};
