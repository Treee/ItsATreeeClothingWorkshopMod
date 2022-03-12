modded class ActionConstructor
{	
	void RegisterActions(TTypenameArray actions)
	{
    super.RegisterActions(actions);
    
    actions.Insert(ActionOpenClam);		
    actions.Insert(ActionDigClam);		
  }
};