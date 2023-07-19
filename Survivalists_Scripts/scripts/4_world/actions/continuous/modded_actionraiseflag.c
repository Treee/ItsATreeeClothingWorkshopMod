modded class ActionRaiseFlag
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    m_Text = "#raise_flag";

    TerritoryFlag totem;
    if (Class.CastTo(totem, target.GetObject()))
    {
      ItemBase stoneTax;
      if (!Class.CastTo(stoneTax, totem.FindAttachmentBySlotName("StonesFlagTax")))
      {
        m_Text = "Raise Flag - Requires Large Stones";
      }
    }
	}
  override void OnFinishProgressServer( ActionData action_data )
	{
    TerritoryFlag totem;
    if (!Class.CastTo(totem, action_data.m_Target.GetObject()))
      return;
    
    ItemBase stoneTax;
    if (!Class.CastTo(stoneTax, totem.FindAttachmentBySlotName("StonesFlagTax")))        
      return;      
      
    stoneTax.AddQuantity(-1);      
    
    super.OnFinishProgressServer(action_data);
  }
};

modded class TerritoryFlag
{
  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
  {
    if (attachment.GetType() == "Stone")
      return true;
    return super.CanReceiveAttachment(attachment, slotId);
  }
};