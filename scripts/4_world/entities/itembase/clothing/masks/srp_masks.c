class SRP_HannyaMask: Clothing {};

class SRP_HannyaMask_Red extends SRP_HannyaMask
{
  override bool CanDetachAttachment (EntityAI parent)
	{
		return false;
	}
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    this.Delete();
  }
}

class SRP_PunisherMask: Clothing {};
class SRP_BoneMonsterMask: Clothing {};

class SRP_Bandana_65Black: Bandana_ColorBase {};
class SRP_Bandana_65Desert: Bandana_ColorBase {};
class SRP_Bandana_65Tan: Bandana_ColorBase {};
class SRP_Bandana_CheckBlue: Bandana_ColorBase {};
class SRP_Bandana_CheckBlueBright: Bandana_ColorBase {};
class SRP_Bandana_CheckGreen: Bandana_ColorBase {};
class SRP_Bandana_CheckRed: Bandana_ColorBase {};
class SRP_Bandana_CheckWhite: Bandana_ColorBase {};
class SRP_Bandana_Denim: Bandana_ColorBase {};
class SRP_Bandana_Kamysh: Bandana_ColorBase {};
class SRP_Bandana_USMC_D: Bandana_ColorBase {};
class SRP_Bandana_USMC_W: Bandana_ColorBase {};
