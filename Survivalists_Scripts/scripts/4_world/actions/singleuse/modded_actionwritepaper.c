modded class ActionWritePaper
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        bool canAction = super.ActionCondition(player, target, item);
        bool isPenAndPaperCombo1 = (item && item.ConfigIsExisting("writingColor") && target.GetObject() && WrittenNote.Cast(target.GetObject()));
        bool isPenAndPaperCombo2 = (target && target.GetObject() && target.GetObject().ConfigIsExisting("writingColor") && item && WrittenNote.Cast(item));

		return canAction || isPenAndPaperCombo1 || isPenAndPaperCombo2;
        // return true;
	}

};