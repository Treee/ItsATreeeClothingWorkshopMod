modded class AreaExposureMdfr
{
  protected float buffInterval = 0;
  protected float m_MutantEnergyModifier = 0;

  override void OnActivate(PlayerBase player)
	{
    if (!player.IsPlayerMutant())
      super.OnActivate(player);

    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      SRP_BioFlowerInfo flower = config.g_BioFlowerManager.GetBioFlowerInfoByPosition(player.GetPosition());
      m_MutantEnergyModifier = 0.2;
      if (flower && flower.GetFlowerEnergy() > 0)
      {
        m_MutantEnergyModifier += (( flower.GetFlowerEnergy() / 50 ) + 0.1);
      }
    }
	}

  override void OnTick(PlayerBase player, float deltaT)
	{
    // Print("AreaExposureMdfr::OnTick::Start");
    if (player && player.SRPIgnoreContaminatedArea())
    {
      // Print("OnTick::Mutant: return from activation");
      if (player.IsPlayerMutant())
      {
        player.GetStatEnergy().Add( ( PlayerConstants.DIGESTION_SPEED * deltaT ) + m_MutantEnergyModifier);
        player.GetStatWater().Add( ( PlayerConstants.DIGESTION_SPEED * deltaT ) + m_MutantEnergyModifier);
        // Print("Adding food in exposure modifier: " + m_MutantEnergyModifier);
      }
      else if (player.IsAlpha() || player.IsQueenAlpha())
      {        
        buffInterval += deltaT;
        if (buffInterval > 10)
        {
          player.GetStatEnergy().Add(500);
          player.GetStatWater().Add(500);
          player.GetStatTiredness().Add(500);
          player.AddHealth("","Blood", 200);
          player.AddHealth("","", 200);
          player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx(NULL);
          player.RemoveAllAgents();
          if( !player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )
          {
            player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
          }
          buffInterval = 0;
        }
      }
      return;
    }
    else
    {
      // Print("call super");
      super.OnTick(player, deltaT);
    }  
  }
}