class ActionMachinePostBoxKeysCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{	
		m_ActionData.m_ActionComponent = new CAContinuousTime(2.0);
	}
};
class ActionMachinePostBoxKey extends ActionContinuousBase
{	
	void ActionMachinePostBoxKey()
	{
    m_CallbackClass = ActionMachinePostBoxKeysCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_RESTRAINTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Create Keys";
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (target && target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(target.GetObject());
      MetalPlate material = MetalPlate.Cast(item);
      if (postBox && material)
      {
        return postBox.IsPlayerOwner(player.GetIdentity().GetId()) && material.GetQuantity() > 4;
      }
			return false;
		}
    return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
    if (action_data.m_Target && action_data.m_Target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(action_data.m_Target.GetObject());
      if (postBox && postBox.IsPlayerOwner(action_data.m_Player.GetIdentity().GetId()))
      {
        SRP_PostBoxKeys_User keys = SRP_PostBoxKeys_User.Cast( GetGame().CreateObjectEx("SRP_PostBoxKeys_User", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE ) );
        keys.SetSRPOwnerID(action_data.m_Player.GetIdentity().GetId());
        keys.SetSRPOwnerName(action_data.m_Player.GetIdentity().GetName());
        // push ownership changes to client
        keys.TryFetchKeyOwnerInfo();
        action_data.m_MainItem.AddQuantity(-5);
      }
    }
	}
};