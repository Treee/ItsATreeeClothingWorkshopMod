class ActionSecurePostBoxCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{	
		m_ActionData.m_ActionComponent = new CAContinuousTime(2.0);
	}
};
class ActionUnlockPostBox extends ActionContinuousBase
{	
	void ActionUnlockPostBox()
	{
    m_CallbackClass = ActionSecurePostBoxCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_RESTRAINTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Unlock Post Box";
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
      SRP_PostBoxKeys_ColorBase key = SRP_PostBoxKeys_ColorBase.Cast(item);
      if (postBox && key)
      {
        return postBox.IsPostBoxLocked() && key.CanSecurePostBox(postBox.GetSRPOwnerSteamIDHash());
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
      if (postBox)
      {
        postBox.TryFetchKeyOwnerInfo();
        postBox.SetIsPostBoxLocked(false);
        postBox.SetSynchDirty();
      }
    }
	}
};

class ActionLockPostBox extends ActionUnlockPostBox
{	
	void ActionLockPostBox()
	{
		m_Text = "Lock Post Box";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (target && target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(target.GetObject());
      SRP_PostBoxKeys_ColorBase key = SRP_PostBoxKeys_ColorBase.Cast(item);
      if (postBox && key)
      {
        return !postBox.IsPostBoxLocked() && key.CanSecurePostBox(postBox.GetSRPOwnerSteamIDHash());
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
      if (postBox)
      {
        postBox.TryFetchKeyOwnerInfo();
        postBox.SetIsPostBoxLocked(true);
        postBox.SetSynchDirty();
      }
    }
	}
};
