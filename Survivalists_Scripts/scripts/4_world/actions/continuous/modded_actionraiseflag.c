modded class ActionRaiseFlag
{	
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (super.ActionCondition(player, target, item))
    {
      TerritoryFlag totem;
      if (!Class.CastTo(totem, target.GetObject()))
        return false;
      
      ItemBase stoneTax;
      if (!Class.CastTo(stoneTax, totem.FindAttachmentBySlotName("StonesFlagTax")))        
        return false;      
      
      return stoneTax.GetQuantity() > 0;      
    }
		return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{
    super.OnFinishProgressServer(action_data);

    TerritoryFlag totem;
    if (!Class.CastTo(totem, action_data.m_Target.GetObject()))
      return;
    
    ItemBase stoneTax;
    if (!Class.CastTo(stoneTax, totem.FindAttachmentBySlotName("StonesFlagTax")))        
      return;      
      
    stoneTax.AddQuantity(-1);      
  }
};

modded class TerritoryFlag
{
  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
  {
    if (!super.CanReceiveAttachment(attachment, slotId))
      return attachment.GetType() == "Stone";
    return false;
  }
};