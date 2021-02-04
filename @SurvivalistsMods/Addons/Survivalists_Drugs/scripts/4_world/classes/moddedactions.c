modded class ActionConstructor
{
  override void RegisterActions(TTypenameArray actions)
  {
    super.RegisterActions(actions);
    
    actions.Insert(SRP_UnPackDrugPack);   
    actions.Insert(SRP_UnPackDrugCarton);
  }
};