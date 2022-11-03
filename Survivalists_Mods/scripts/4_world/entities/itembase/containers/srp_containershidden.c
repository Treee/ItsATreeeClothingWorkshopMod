class SRP_HiddenStash_Base extends ItemBase
{
	protected bool m_IsOpened;
	
	void SRP_HiddenStash_Base()
	{
    // start not opened
		m_IsOpened = false;
		
		RegisterNetSyncVariableBool("m_IsOpened");
	}
  override void OnVariablesSynchronized()
	{
    if (IsOpen())
    {
      Open();
    }
    else 
    {
      Close();
    }
  };
	
	override void Open()
	{
		m_IsOpened = true;
    SetSynchDirty();
	}
	
	override void Close()
	{
		m_IsOpened = false;
    SetSynchDirty();
	}
		  
  override bool IsOpen()
	{
    return m_IsOpened;
	}
  
  override string GetDisplayName()
	{
    string itemName = super.GetDisplayName();
    if (IsOpen())
    {
      itemName = itemName + " Opened";
    }
		return itemName;
	}

	override bool CanPutInCargo( EntityAI parent )
	{
    return true;
	}

  override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if ( IsOpen() )
			return super.CanReceiveItemIntoCargo( item );
		
		return false;
	}

	override bool CanReleaseCargo( EntityAI attachment )
	{
		return IsOpen();
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOpen);
		AddAction(ActionClose);
	}
};

class SRP_HiddenStash_FoodCan extends SRP_HiddenStash_Base{};
class SRP_HiddenStash_Guts extends SRP_HiddenStash_Base{};
class SRP_HiddenStash_Teddy extends SRP_HiddenStash_Base{};