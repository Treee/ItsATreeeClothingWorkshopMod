modded class ItemActionsWidget extends ScriptedWidgetEventHandler
{
	override protected void SetItemDesc(EntityAI entity, string descText, string itemWidget, string descWidget)
	{
		Widget widget;
		
		widget = m_Root.FindAnyWidget(itemWidget);
		TextWidget itemName;
		if(entity)
		{
			if (entity.IsTransmitter())
			{
				TransmitterBase radio = TransmitterBase.Cast(entity);
				descText.ToUpper();
				
				Class.CastTo(itemName, widget.FindAnyWidget(descWidget));
				if(radio)
				{
					if(radio.IsMuted())
					{
						itemName.SetText("!!||MUTED||!! " + descText);
					} else
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
}