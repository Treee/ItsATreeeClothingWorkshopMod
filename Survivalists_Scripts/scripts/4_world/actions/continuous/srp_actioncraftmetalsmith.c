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
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!target)
      return false;
    SRP_Anvil_ColorBase anvil;    
    if (Class.CastTo(anvil, target.GetObject()))
    {       
      if (anvil.HasCorrectCombination())
      {
        return true;
      }
    }
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
    SRP_Anvil_ColorBase anvil;
    if (Class.CastTo(anvil, action_data.m_Target.GetObject()))
    {
      string newItem = anvil.ReduceAttachedQuantities();
			anvil.DecreaseHealth( 10, false );
      Print("Creating " + newItem);
      GetGame().CreateObjectEx(newItem, anvil.GetMemoryPointPosition("sparks_position"), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT);
    }		
	}
}