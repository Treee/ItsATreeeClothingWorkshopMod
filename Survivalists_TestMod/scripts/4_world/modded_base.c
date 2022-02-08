modded class ActionConstructor 
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
    
		actions.Insert(ActionOpenCryptoDoor);  
	}
};

modded class ActionOpenDoors
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // if any of our doors are the target, do not allow them to be opened.
		jmc_dungeon_Door06_Double_Lever lever;    
		if( Class.CastTo(lever, target.GetObject()))
    {
      return false;
    }
    jmc_dungeon_Door06_Double doubleDoor;    
		if( Class.CastTo(doubleDoor, target.GetObject()))
    {
      return false;
    }
    // otherwise, do vanilla logic
    return super.ActionCondition(player, target, item);
	}
};

modded class ActionCloseDoors
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // if any of our doors are the target, do not allow them to be opened.
		jmc_dungeon_Door06_Double_Lever lever;    
		if( Class.CastTo(lever, target.GetObject()))
    {
      return false;
    }
    jmc_dungeon_Door06_Double doubleDoor;    
		if( Class.CastTo(doubleDoor, target.GetObject()))
    {
      return false;
    }
    // otherwise, do vanilla logic
    return super.ActionCondition(player, target, item);
	}
};