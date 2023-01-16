class SRP_ActionMetalSmithCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 10 );
	}
};

class SRP_ActionMetalSmith: ActionContinuousBase
{
	void SRP_ActionMetalSmith()
	{
		m_CallbackClass = SRP_ActionMetalSmithCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
    m_Text = "Craft";

    if ( GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			GetVariantManager().GetOnUpdateInvoker().Insert(OnUpdateActions);
		}
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool CanBeUsedLeaning()
	{
		return false;
	}

  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_Anvil_ColorBase anvil;    
    if (Class.CastTo(anvil, target.GetObject()))
    {
      if (anvil.HasCraftableMatches())
      {
			  m_Text = "Craft " + anvil.potentialCraftableItems.Get(m_VariantID).GetDisplayName();
      }
    }
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!target)
      return false;
    SRP_Anvil_ColorBase anvil;    
    if (Class.CastTo(anvil, target.GetObject()))
    {       
      return anvil.HasCraftableMatches();
    }
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
    SRP_Anvil_ColorBase anvil;
    if (Class.CastTo(anvil, action_data.m_Target.GetObject()))
    {
      anvil.ReduceAttachedQuantities(anvil.potentialCraftableItems.Get(m_VariantID));
			anvil.DecreaseHealth( 10, false );
      // Print("Creating " + anvil.potentialCraftableItems.Get(m_VariantID).GetItemClassName());
      GetGame().CreateObjectEx(anvil.potentialCraftableItems.Get(m_VariantID).GetItemClassName(), anvil.GetMemoryPointPosition("sparks_position"), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT);
    }		
	}

  void OnUpdateActions( Object item, Object target, int component_index )
	{
		SRP_Anvil_ColorBase anvil;
		if (Class.CastTo(anvil, target))
		{
      if (anvil.HasCraftableMatches())
      {
        // Print("me actions " + target_player.GetPlayerFacePaintCount());
        GetVariantManager().SetActionVariantCount(anvil.potentialCraftableItems.Count());
      }
		}
		else
		{
			GetVariantManager().Clear();
		}
	}
}