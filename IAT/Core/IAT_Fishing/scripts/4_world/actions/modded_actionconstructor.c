modded class ActionConstructor
{	
	override void RegisterActions(TTypenameArray actions)
	{
    super.RegisterActions(actions);
    
    actions.Insert(IAT_ActionOpenClam);		
    actions.Insert(IAT_ActionDigClam);		
  }
};