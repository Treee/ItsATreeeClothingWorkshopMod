modded class ActionDigWorms
{
	override void OnFinishProgressServer( ActionData action_data )
	{	
    // 60ish % chance to get works
    if (Math.RandomIntInclusive(1,20) > 8)
    {
      int numWorms = Math.RandomIntInclusive(1,5);
      for(int i = 0; i < numWorms; i++)
      {
        GetGame().CreateObjectEx("Worm", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE);
      }
      MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, Math.RandomIntInclusive(4,10));
      action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
    }

    if (Math.RandomIntInclusive(1,10) > 7)
    {
      ItemBase clay;
      Class.CastTo(clay, GetGame().CreateObjectEx("SRP_Mining_StoneChunk_Clay", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
      clay.SetQuantity(1);
    }
	}
};