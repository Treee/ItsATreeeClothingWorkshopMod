modded class ActionConstructor
{	
	override void RegisterActions(TTypenameArray actions)
	{
    super.RegisterActions(actions);
    
    actions.Insert(ActionOpenClam);		
    actions.Insert(ActionDigClam);		
    actions.Insert(ActionUnpackWorm);		
  }
};