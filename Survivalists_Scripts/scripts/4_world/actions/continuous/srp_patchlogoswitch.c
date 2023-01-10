class PatchLogoSwitchReciveData extends ActionReciveData
{
  int m_PatchLogoId;
}

class PatchLogoSwitchData extends ActionData
{
  int m_PatchLogoId;
};

class ActionSwitchPatchLogoOptionCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(4.0);
	}
};

class ActionSwitchPatchLogoOption extends ActionContinuousBase
{	
  void ActionSwitchPatchLogoOption()
	{
		m_CallbackClass = ActionSwitchPatchLogoOptionCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Patch - ";

    if ( GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			GetVariantManager().GetOnUpdateInvoker().Insert(OnUpdateActions);
		}
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
		string logo = GetPatchLogoOptions().Get(m_VariantID);
		if (logo && logo != "" )
		{
      // 14 = "SRP_PatchLogo_".Length();
      logo = logo.Substring(14, logo.Length());
			m_Text = "Patch - " + logo;
		}
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    SRP_PatchLogo_StarterKit patchLogoStarterKit;
    // Print("Item: " + item);
    if (Class.CastTo(patchLogoStarterKit, item))
    {
      // Print("bool?: " + patchLogoStarterKit.CanCraft());
      return patchLogoStarterKit.CanCraft();
    }
    return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_PatchLogo_StarterKit patchLogoStarterKit;
		if (action_data.m_MainItem && Class.CastTo(patchLogoStarterKit, action_data.m_MainItem))
		{
      int variantId = PatchLogoSwitchData.Cast(action_data).m_PatchLogoId;
      string newKitName = GetPatchLogoOptions().Get(variantId);
      // Print("New kit name: " + newKitName);
      GetGame().CreateObjectEx(newKitName, action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE);
      patchLogoStarterKit.Delete();
		}
	}

  override ActionData CreateActionData()
	{
		PatchLogoSwitchData action_data = new PatchLogoSwitchData;
		return action_data;
	}

  override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{			
			if ( !GetGame().IsDedicatedServer() )
			{
				PatchLogoSwitchData.Cast(action_data).m_PatchLogoId = m_VariantID;
			}
			return true;
		}		
		return false;
	}

  override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		ctx.Write(PatchLogoSwitchData.Cast(action_data).m_PatchLogoId);
	}

	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		action_recive_data = new PatchLogoSwitchReciveData;
		super.ReadFromContext(ctx, action_recive_data);
		
		int variantId;
		if ( ctx.Read(variantId) )
		{
      // Print("[ReadFromContext] - " + variantId)
			PatchLogoSwitchReciveData.Cast( action_recive_data ).m_PatchLogoId = variantId;
			return true;
		}
		else
		{
			return false;
		}
  }

  override void HandleReciveData(ActionReciveData action_recive_data, ActionData action_data)
	{
		super.HandleReciveData(action_recive_data, action_data);    
		PatchLogoSwitchData.Cast(action_data).m_PatchLogoId = PatchLogoSwitchReciveData.Cast( action_recive_data ).m_PatchLogoId;
	}


  void OnUpdateActions( Object item, Object target, int component_index )
	{
		SRP_PatchLogo_StarterKit patchLogoStarterKit;
		if (Class.CastTo(patchLogoStarterKit, item))
		{
      GetVariantManager().SetActionVariantCount(GetPatchLogoOptions().Count());
		}
		else
		{
			GetVariantManager().Clear();
		}
	}

  TStringArray GetPatchLogoOptions()
  {
    return {
      "SRP_PatchLogo_01",
      "SRP_PatchLogo_02",
      "SRP_PatchLogo_03",
      "SRP_PatchLogo_04",
      "SRP_PatchLogo_05",
      "SRP_PatchLogo_06",
      "SRP_PatchLogo_07",
      "SRP_PatchLogo_08",
      "SRP_PatchLogo_09",
      "SRP_PatchLogo_10",
      "SRP_PatchLogo_11",
      "SRP_PatchLogo_12",
      "SRP_PatchLogo_13",
      "SRP_PatchLogo_14",
      "SRP_PatchLogo_15",
      "SRP_PatchLogo_16",
      "SRP_PatchLogo_17",
      "SRP_PatchLogo_18",
      "SRP_PatchLogo_19",
      "SRP_PatchLogo_20",
      "SRP_PatchLogo_21",
      "SRP_PatchLogo_22",
      "SRP_PatchLogo_23",
      "SRP_PatchLogo_24",
      "SRP_PatchLogo_25",
      "SRP_PatchLogo_26",
      "SRP_PatchLogo_27",
      "SRP_PatchLogo_28",
      "SRP_PatchLogo_29",
      "SRP_PatchLogo_30",
      "SRP_PatchLogo_31",
      "SRP_PatchLogo_32",
      "SRP_PatchLogo_33",
      "SRP_PatchLogo_34",
      "SRP_PatchLogo_35"
    };
  }
};
