// clam fillets are in /fishfillet.c
class IAT_Fishing_Clam_ColorBase extends ItemBase
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(IAT_ActionOpenClam);
	}	
	override bool IsOpen()
	{
		return false;
	}  
};
class IAT_Fishing_Clam_Blue extends IAT_Fishing_Clam_ColorBase{};
class IAT_Fishing_Clam_Red extends IAT_Fishing_Clam_ColorBase{};
class IAT_Fishing_Clam_Silver extends IAT_Fishing_Clam_ColorBase{};

class IAT_Fishing_Clam_ColorBase_Opened extends ItemBase
{
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		if ( GetGame().IsDedicatedServer() )
    {
      if (slot_name == "IAT_ClamPearl" || slot_name == "IAT_ClamMeat")
      {
        AddHealth(-200);
      }		
    }
	}
  void TryAddPearl()
  {

  }
};
class IAT_Fishing_Clam_Blue_Opened extends IAT_Fishing_Clam_ColorBase_Opened{};
class IAT_Fishing_Clam_Red_Opened extends IAT_Fishing_Clam_ColorBase_Opened{};
class IAT_Fishing_Clam_Silver_Opened extends IAT_Fishing_Clam_ColorBase_Opened{};
