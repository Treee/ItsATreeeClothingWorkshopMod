
class ActionPourMoltenMetalIntoMoldCB : ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible(UAQuantityConsumed.DEFAULT);
	}
};

class ActionPourMoltenMetalIntoMold: ActionSingleUseBase
{
	void ActionPourMoltenMetalIntoMold()
	{
		m_CallbackClass = ActionPourMoltenMetalIntoMoldCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INJECTIONTARGET;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
		m_FullBody = true;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}
		
	override string GetText()
	{
		return "Pour Into Mold";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		ItemBase target_item = ItemBase.Cast(target.GetObject());
    ItemBase tongs = ItemBase.Cast(item);
    SRP_ForgeCrucible_ColorBase crucibleAttachment = SRP_ForgeCrucible_ColorBase.Cast(tongs.FindAttachmentBySlotName("SRP_Crucible"));
		if (SRP_ForgeIngotMold_Empty.Cast(target_item) && crucibleAttachment && crucibleAttachment.GetTemperature() >= 180)
			return true;
		
		return false;
	}
		
	override void OnEndServer( ActionData action_data )
	{
		if ( action_data.m_MainItem ) 
		{
      ItemBase tongs = ItemBase.Cast(action_data.m_MainItem);
      SRP_ForgeIngotMold_Empty ingotMold = SRP_ForgeIngotMold_Empty.Cast(action_data.m_Target.GetObject());
			SRP_ForgeCrucible_ColorBase crucibleAttachment = SRP_ForgeCrucible_ColorBase.Cast(tongs.FindAttachmentBySlotName("SRP_Crucible"));

      if (crucibleAttachment && ingotMold)
      {
				string color = crucibleAttachment.ConfigGetString("color");
        string newClassName = "SRP_ForgeIngotMold_" + color;
        ItemBase newIngotMold = ItemBase.Cast(GetGame().CreateObjectEx(newClassName, ingotMold.GetPosition(), false));
        newIngotMold.SetTemperature(crucibleAttachment.GetTemperature());
        ingotMold.Delete();
        crucibleAttachment.Delete();
        tongs.AddHealth(-10);
      }
		}
	}
	
};