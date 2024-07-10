modded class Paper
{
  override bool CanBeStoredInNotebook()
  {
    return true;
  }
};
modded class WrittenNote
{
  override bool CanBeStoredInNotebook()
  {
    return true;
  }
};
modded class SRP_ConsumableDrug_Colorbase
{
  override bool CanBeStoredInNotebook()
  {
    return true;
  }
};
modded class DUB_Newspaper_Base
{
  override bool CanBeStoredInNotebook()
  {
    return true;
  }
};
modded class SRP_UnSealedLetter
{
  override bool CanBeStoredInNotebook()
  {
    return true;
  }
};
modded class SRP_SealedLetter_ColorBase
{
  override bool CanBeStoredInNotebook()
  {
    return true;
  }
};

class SRP_Paper_LargeSheetRaw extends ItemBase
{
    override void SetActions()
	{
		super.SetActions();

		AddAction(SRP_PressWaterFromPaper);
	}
};