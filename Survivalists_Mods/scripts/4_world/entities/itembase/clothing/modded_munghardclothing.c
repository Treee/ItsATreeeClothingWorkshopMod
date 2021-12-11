modded class meleesling_colorbase_mung
{
  override bool CanPutInCargo( EntityAI parent )
	{ // if anything is attached you cannot put this into cargo. no more "smaller" guns
    return GetInventory().AttachmentCount() == 0;
	}

  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{ // fix belt chains...
		if ( !attachment.IsKindOf("RifleCore") && !attachment.IsKindOf("meleesling_colorbase_mung"))
		{
			return true;
		}
		return false;
	}
}

modded class riflesling_colorbase_mung
{
  override bool CanPutInCargo( EntityAI parent )
	{ // if anything is attached you cannot put this into cargo. no more "smaller" guns    
    return GetInventory().AttachmentCount() == 0;
	}

  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{ // fix belt chains...
		if ( attachment.IsKindOf("RifleCore") && !attachment.IsKindOf("riflesling_colorbase_mung"))
		{
			return true;
		}
		return false;
	}
};