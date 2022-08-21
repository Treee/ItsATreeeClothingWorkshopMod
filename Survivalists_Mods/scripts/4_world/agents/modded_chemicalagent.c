modded class ChemicalAgent
{
  override float GetInvasibilityEx(PlayerBase player)
	{
    ItemBase itemInHands;
    if (player && Class.CastTo(itemInHands, player.GetItemInHands()))
    { 
      m_TransferabilityIn = 1;
      float invasibility = 0.0;
      if (itemInHands.GetType() == "SRP_LabTube_MutantLiquidSterilizedIrradiated")
      {
        invasibility = 15.0;
      }
      if (itemInHands.GetType() == "SRP_LabTube_MutantLiquidSterilizedIrradiatedNeutral")
      {
        invasibility = 6.0;
      }
      else if (itemInHands.GetType().Contains("DUB_Mutantsyringe"))
      {
        invasibility = 15.0;
      }
      else if (itemInHands.GetType().Contains("DUB_Mutant_Accel"))
      {
        invasibility = 10.0;
      }
      else if (itemInHands.GetType().Contains("DUB_Mutant_Crude"))
      {
        invasibility = 15.0;
      }
      else if (itemInHands.GetType().Contains("DUB_MutantSuppressor"))
      {
        invasibility = 8.0;
      }
      return invasibility;
    }
		return super.GetInvasibilityEx(player);
	}

};