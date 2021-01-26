modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionDrugSelf1);
    actions.Insert(ActionDrugOthers1);
    
    actions.Insert(IncreaseVolume);
    actions.Insert(DecreaseVolume);

    actions.Insert(TurnOnRadio);
    actions.Insert(TurnOffRadio);
	}
}