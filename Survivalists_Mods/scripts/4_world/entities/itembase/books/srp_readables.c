modded class ItemBook
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionReadBook);
	}
};

class SRP_ReadableBook_Colorbase extends ItemBook{};
class SRP_ReadableScroll_Colorbase extends ItemBook{};