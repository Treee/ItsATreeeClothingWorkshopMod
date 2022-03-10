class SRP_Clam extends Edible_Base
{
	override void Open()
	{
		ReplaceEdibleWithNew("SRP_Clam_Opened");
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionOpen);
	}
	
	override bool IsOpen()
	{
		return false;
	}
}

class SRP_Clam_Opened extends Edible_Base
{
  float m_PearlChance = 0.05;

  override void EEInit() 
  {
		super.EEInit();
		if ( GetGame().IsDedicatedServer() ) // Multiplayer server
    {
      AddHealth(-200);
      float rnd = Math.RandomFloatInclusive(0,1);
      float calculatPearlChance = 1-m_PearlChance;
      if (rnd > calculatPearlChance)
      {
        GetInventory().CreateAttachment("SRP_Pearl");
      }

      GetInventory().CreateAttachment("ClamFilletMeat");
      GetInventory().CreateAttachment("ClamFilletMeat");
    }
	}

	override bool CanDecay()
	{
		return false;
	}
	
	override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		// AddAction(ActionForceFeedCan);
		// AddAction(ActionEatCan);
	}
};
