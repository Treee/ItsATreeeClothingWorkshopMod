modded class ItemActionsWidget
{
	override protected void SetItemDesc(EntityAI entity, string descText, string itemWidget, string descWidget)
	{
		Widget widget;
		
		widget = m_Root.FindAnyWidget(itemWidget);
		if(entity)
		{
			if (entity.IsTransmitter())
			{
				TransmitterBase radio = TransmitterBase.Cast(entity);
				descText.ToUpper();
				
		    TextWidget itemName;
				Class.CastTo(itemName, widget.FindAnyWidget(descWidget));
				if(radio)
				{
					if(radio.IsMuted())
					{
						itemName.SetText("!!||MUTED||!! " + descText);
					} 
					else
					{
						itemName.SetText(descText);
					}
				}
				widget.Show(true);
			} 
			else 
			{
				descText.ToUpper();
				
				Class.CastTo(itemName, widget.FindAnyWidget(descWidget));
				itemName.SetText(descText);
				widget.Show(true);
			}
		}
		else
			widget.Show(false);
	}

  // Hide how much ammo is in your weapon
  override protected void SetWeaponQuantity(int chamber, int mag, string itemWidget, string quantityPBWidget, string quantityTextWidget, bool enabled)
	{
		Widget widget;
		
		widget = m_Root.FindAnyWidget(itemWidget);

    widget.Show(false);
	}

}