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
      else if (itemInHands.GetType() == "DUB_Mutantsyringe_Pure")
      {
        invasibility = 15.0;
      }
      else if (itemInHands.GetType() == "DUB_Mutantsyringe_Pure_Accel")
      {
        invasibility = 10.0;
      }
      else if (itemInHands.GetType() == "DUB_Mutantsyringe_Admin2")
      {
        invasibility = 5.0;
      }
      else if (itemInHands.GetType() == "DUB_Mutantsyringe_Admin4")
      {
        invasibility = 8.0;
      }
      else if (itemInHands.GetType() == "DUB_Mutantsyringe_Pure_Sup")
      {
        invasibility = 4.5;
      }
      else if (itemInHands.GetType() == "DUB_Mutantsyringe_Crude")
      {
        invasibility = 3.5;
      }
      else if (itemInHands.GetType() == "DUB_Mutantsyringe_Crude_Cure")
      {
        invasibility = 7.5;
      }
      return invasibility;
    }
		return super.GetInvasibilityEx(player);
	}

};