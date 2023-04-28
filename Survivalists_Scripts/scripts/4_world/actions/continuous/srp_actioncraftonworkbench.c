class SRP_ActionCraftOnWorkbench extends ActionSRPVariantIdOption
{	
  void SRP_ActionCraftOnWorkbench()
	{
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
		m_FullBody = true;
	}
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
    m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
  }
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_CraftingBench_Base craftingWorkbench;    
    if (Class.CastTo(craftingWorkbench, target.GetObject()))
    {
      if (craftingWorkbench.HasCraftableMatches())
      {
			  m_Text = "Craft " + craftingWorkbench.GetCraftableItemDisplayNameByIndex(m_VariantID);
      }
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!target)
      return false;
    SRP_CraftingBench_Base craftingWorkbench;        
    if (Class.CastTo(craftingWorkbench, target.GetObject()))
    {
      // is item in hands an item this bench considers the tool?
      if (!craftingWorkbench.CanAcceptTool(item))
        return false;
      // string.Format("Looking at the correct bench, has recipes? %1", craftingWorkbench.HasCraftableMatches());
      return craftingWorkbench.HasCraftableMatches();
    }
		return false;
	}
	override void OnFinishProgressServer( ActionData action_data )
	{
    SRP_CraftingBench_Base craftingWorkbench;
    if (Class.CastTo(craftingWorkbench, action_data.m_Target.GetObject()))
    {
      int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      SRP_CraftableItem newItem = craftingWorkbench.GetCraftableItemByIndex(variantId);
      craftingWorkbench.ReduceAttachedQuantities(newItem);
			craftingWorkbench.DecreaseHealth( craftingWorkbench.GetCraftingDamage(), false );
      // Print(string.Format("Creating %1 from inded %2",newItem.GetDisplayName(), variantId));
      GetGame().CreateObjectEx(newItem.GetItemClassName(), craftingWorkbench.GetMemoryPointPosition("item_spawn_position"), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT);
    }		
	}
  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    SRP_CraftingBench_Base craftingWorkbench;
		if (Class.CastTo(craftingWorkbench, target))
		{
      if (craftingWorkbench.HasCraftableMatches())
      {
        // Print("me actions " + target_player.GetPlayerFacePaintCount());
        GetVariantManager().SetActionVariantCount(craftingWorkbench.GetPotentialCraftableItemCount());
      }
		}
		else
		{
			GetVariantManager().Clear();
		}
	}
};
