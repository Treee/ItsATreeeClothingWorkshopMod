modded class Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id ) 
  {   
    super.OnWasAttached(parent, slot_id);
    PlayerBase player;
    if(Class.CastTo(player, parent))
    {
      float protection = GetProtectionLevel(DEF_BIOLOGICAL);
      if (protection > 0)
      {
        player.ModifyContaminationProtection(protection);
      }
    }
  }
	override void OnWasDetached(EntityAI parent, int slot_id)
	{
		super.OnWasDetached(parent,slot_id);

		PlayerBase player = PlayerBase.Cast(parent);
		if(Class.CastTo(player, parent))
    {
      float protection = GetProtectionLevel(DEF_BIOLOGICAL);
      if (protection > 0)
      {
        player.ModifyContaminationProtection(-protection);
      }
    }	
	}
  bool IsEventArmband()
  {
    return false;
  }
};