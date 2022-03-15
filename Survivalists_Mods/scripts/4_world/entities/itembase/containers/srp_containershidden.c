class SRP_HiddenStash_Base extends Inventory_Base
{
	protected ref OpenableBehaviour m_Openable;
	
	void SRP_HiddenStash_Base()
	{
    // start not opened
		m_Openable = new OpenableBehaviour(false);		
		
		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");
	}
	
	override void Open()
	{
		m_Openable.Open();
    SetSynchDirty();
	}
	
	override void Close()
	{
		m_Openable.Close();
    SetSynchDirty();
	}
		  
  override bool IsOpen()
	{
		return m_Openable.IsOpened();
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
		if ( !super.CanPutInCargo( parent ))
			return false;

    // if there are items inside and the stash is open
		if ( GetNumberOfItems() > 0 && IsOpen() )
			return true;
    // if the stash is closed
    if ( !IsOpen() )
			return true;

		return false;
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