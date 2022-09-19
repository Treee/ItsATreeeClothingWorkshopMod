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


class SRP_SealPress_ColorBase extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSealLetter);
	}
};


class SRP_UnSealedLetter extends ItemBase
{
  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (attachment && (attachment.IsKindOf("Paper") || attachment.IsKindOf("WrittenNote")) )
			return super.CanReceiveAttachment( attachment, slotId );

		return false;
	}
};


class SRP_SealedLetter_ColorBase extends ItemBase
{ 
  override string GetDisplayName()
	{
    string itemName = super.GetDisplayName();
    if (!IsRuined())
    {
      itemName = itemName + " - Sealed";
    }
    else
    {
      itemName = itemName + " - Opened";
    }
		return itemName;
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (attachment && (attachment.IsKindOf("Paper") || attachment.IsKindOf("WrittenNote") || attachment.GetType() == "WrittenNote") )
			return super.CanReceiveAttachment( attachment, slotId );
		
		return false;
	}

  override bool CanDisplayAttachmentSlot( string slot_name )
	{
		return IsRuined();
	}

};
class SRP_SealedLetter_Black extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Blue extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Brown extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Green extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Pink extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Red extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_White extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Yellow extends SRP_SealedLetter_ColorBase{};
