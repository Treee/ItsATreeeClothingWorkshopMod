class SRP_FreshWaterFish_Base extends Edible_Base
{
  override bool CanBeCookedOnStick()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}	
	
	override bool IsCorpse()
	{
		return true;
	}	
		
	override bool CanDecay()
	{
		return true;
	}

  override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
		
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
};

class SRP_SaltWaterFish_Base extends Edible_Base
{
  override bool CanBeCookedOnStick()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}	
	
	override bool IsCorpse()
	{
		return true;
	}	
		
	override bool CanDecay()
	{
		return true;
	}

  override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
		
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
};

class SRP_FreshWaterFishFilletMeat_Base extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}

  override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
		
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
};

class SRP_FreshWaterFishFilletMeat_Trout extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_MutantFish extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_Splake extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_Perch extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_Tilapia extends SRP_FreshWaterFishFilletMeat_Base{};

class SRP_SaltWaterFishFilletMeat_Base extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}

  override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);
		
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
};

class SRP_SaltWaterFishFilletMeat_CoralFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_AngelFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_SailFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_AnglerFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_HammerHeadFish extends SRP_SaltWaterFishFilletMeat_Base{};