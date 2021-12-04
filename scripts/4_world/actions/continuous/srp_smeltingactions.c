
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


class ActionEmptyIngotMoldCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNPACK);
	}
};

class ActionEmptyIngotMold: ActionContinuousBase
{	
	void ActionEmptyIngotMold()
	{
		m_CallbackClass = ActionEmptyIngotMoldCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_OPENITEM;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Empty Ingot Mold";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{		
    SRP_ForgeIngotMold_ColorBase ingotMold = SRP_ForgeIngotMold_ColorBase.Cast(item);
    if (ingotMold)    
    {
      string moldType = ingotMold.GetType();
      if (moldType != "SRP_ForgeIngotMold_MetalEmpty" && moldType != "SRP_ForgeIngotMold_Lime" && moldType != "SRP_ForgeIngotMold_Mortar" && moldType != "SRP_ForgeIngotMold_Empty")
      {
        return ingotMold.GetTemperature() < 31;        
      }
    }
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		if ( action_data.m_MainItem)
		{
      ItemBase ingotMold = ItemBase.Cast(action_data.m_MainItem);
      string color = ingotMold.ConfigGetString("color");
      string newClassName = "SRP_ForgeIngot_" + color;
      ItemBase newIngot = ItemBase.Cast(GetGame().CreateObjectEx(newClassName, ingotMold.GetPosition(), false));      
      ingotMold.Delete();
		}
	}
};
