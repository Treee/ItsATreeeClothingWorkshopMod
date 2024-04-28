class ArmbandSwitchReciveData extends ActionReciveData
{
  int m_ArmbandId;
}

class ArmbandSwitchData extends ActionData
{
  int m_ArmbandId;
};

class ActionSwitchSingleArmbandOptionCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(4.0);
	}
};

class ActionSwitchSingleArmbandOption extends ActionContinuousBase
{
  int m_SubstringStartIndex = 0;
  void ActionSwitchSingleArmbandOption()
	{
		m_CallbackClass = ActionSwitchSingleArmbandOptionCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Armband - ";
    m_SubstringStartIndex = 8;

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
		string armband = GetArmbandOptions().Get(m_VariantID);
		if (armband && armband != "" )
		{
      // m_SubstringStartIndex = "Armband_".Length();
      armband = armband.Substring(m_SubstringStartIndex, armband.Length());
			m_Text = "Armband - " + armband;
		}
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_IntermediateCraftingKitBase intermediateKit;
    // Print("Item: " + item);
    if (Class.CastTo(intermediateKit, item))
    {
      // Print("bool?: " + intermediateKit.CanCraft());
      return intermediateKit.CanCraft();
    }
    return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{
    SRP_IntermediateCraftingKitBase intermediateKit;
		if (action_data.m_MainItem && Class.CastTo(intermediateKit, action_data.m_MainItem))
		{
      int variantId = ArmbandSwitchData.Cast(action_data).m_ArmbandId;
      string newKitName = GetArmbandOptions().Get(variantId);
      // Print("New kit name: " + newKitName);
      GetGame().CreateObjectEx(newKitName, action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE);
      intermediateKit.Delete();
		}
	}

  override ActionData CreateActionData()
	{
		ArmbandSwitchData action_data = new ArmbandSwitchData;
		return action_data;
	}

  override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{
			if ( !GetGame().IsDedicatedServer() )
			{
				ArmbandSwitchData.Cast(action_data).m_ArmbandId = m_VariantID;
			}
			return true;
		}
		return false;
	}

  override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		ctx.Write(ArmbandSwitchData.Cast(action_data).m_ArmbandId);
	}

	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		action_recive_data = new ArmbandSwitchReciveData;
		super.ReadFromContext(ctx, action_recive_data);

		int variantId;
		if ( ctx.Read(variantId) )
		{
      // Print("[ReadFromContext] - " + variantId)
			ArmbandSwitchReciveData.Cast( action_recive_data ).m_ArmbandId = variantId;
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
		ArmbandSwitchData.Cast(action_data).m_ArmbandId = ArmbandSwitchReciveData.Cast( action_recive_data ).m_ArmbandId;
	}


  void OnUpdateActions( Object item, Object target, int component_index )
	{
		SRP_IntermediateCraftingKitBase intermediateKit;
		if (Class.CastTo(intermediateKit, item))
		{
      GetVariantManager().SetActionVariantCount(GetArmbandOptions().Count());
		}
		else
		{
			GetVariantManager().Clear();
		}
	}

  TStringArray GetArmbandOptions()
  {
    return {
        "Armband_White",
        "Armband_Yellow",
        "Armband_Orange",
        "Armband_Red",
        "Armband_Green",
        "Armband_Pink",
        "Armband_Blue",
        "Armband_Black",
        "Armband_Chernarus",
        "Armband_Chedaki",
        "Armband_NAPA",
        "Armband_CDF",
        "Armband_Livonia",
        "Armband_Altis",
        "Armband_SSahrani",
        "Armband_NSahrani",
        "Armband_DayZ",
        "Armband_LivoniaArmy",
        "Armband_Bohemia",
        "Armband_APA",
        "Armband_UEC",
        "Armband_Pirates",
        "Armband_Cannibals",
        "Armband_Bear",
        "Armband_Wolf",
        "Armband_BabyDeer",
        "Armband_Rooster",
        "Armband_LivoniaPolice",
        "Armband_CMC",
        "Armband_TEC",
        "Armband_CHEL",
        "Armband_Zenit",
        "Armband_HunterZ",
        "Armband_BrainZ",
        "Armband_Refuge",
        "Armband_RSTA",
        "Armband_Snake",
        "Armband_BisexualFlag",
        "Armband_MotherOfAll",
        "Armband_BrainPlate",
        "Armband_MushroomDrawing",
        "Armband_FaceDry",
        "Armband_Mushroom",
        "Armband_GBPrideFlag",
        "Armband_Octopus",
        "Armband_HeterosexualFlag",
        "Armband_PrideFlag",
        "Armband_HummingBird",
        "Armband_Reaper",
        "Armband_Ireland",
        "Armband_SantaMuerte",
        "Armband_JeMeSouviens",
        "Armband_TransFlag",
        "Armband_Jurassic",
        "Armband_Turkey",
        "Armband_Kraken",
        "Armband_Ukraine",
        "Armband_Lilith",
        "Armband_ViveLeQuebecWeed",
        "Armband_MaineState",
    };
  }
};

class ActionSwitchDoubleArmbandOption extends ActionSwitchSingleArmbandOption
{
  void ActionSwitchDoubleArmbandOption()
	{
		m_CallbackClass = ActionSwitchSingleArmbandOptionCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Double Armband - ";
    m_SubstringStartIndex = 8;

    if ( GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			GetVariantManager().GetOnUpdateInvoker().Insert(OnUpdateActions);
		}
	}

  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
		string armband = GetArmbandOptions().Get(m_VariantID);
		if (armband && armband != "" )
		{
      // m_SubstringStartIndex = "Armband_".Length();
      armband = armband.Substring(m_SubstringStartIndex, armband.Length());
			m_Text = "Double Armband - " + armband;
		}
	}

  override TStringArray GetArmbandOptions()
  {
    return {
        "Armband_Bandit",
        "Armband_Blacker",
        "Armband_DarkerBluer",
        "Armband_DarkerPurpler",
        "Armband_Greener",
        "Armband_DarkerGreyer",
        "Armband_Bluer",
        "Armband_Greyer",
        "Armband_Lime",
        "Armband_Medic",
        "Armband_Medic1",
        "Armband_Medic2",
        "Armband_Medic3",
        "Armband_Medic4",
        "Armband_Oranger",
        "Armband_Pinker",
        "Armband_Purpler",
        "Armband_Redder",
        "Armband_Teal",
        "Armband_Yellower",
        "Armband_White",
        "Armband_Yellow",
        "Armband_Orange",
        "Armband_Red",
        "Armband_Green",
        "Armband_Pink",
        "Armband_Blue",
        "Armband_Black",
        "Armband_Chernarus",
        "Armband_Chedaki",
        "Armband_NAPA",
        "Armband_CDF",
        "Armband_Livonia",
        "Armband_Altis",
        "Armband_SSahrani",
        "Armband_NSahrani",
        "Armband_DayZ",
        "Armband_LivoniaArmy",
        "Armband_Bohemia",
        "Armband_APA",
        "Armband_UEC",
        "Armband_Pirates",
        "Armband_Cannibals",
        "Armband_Bear",
        "Armband_Wolf",
        "Armband_BabyDeer",
        "Armband_Rooster",
        "Armband_LivoniaPolice",
        "Armband_CMC",
        "Armband_TEC",
        "Armband_CHEL",
        "Armband_Zenit",
        "Armband_HunterZ",
        "Armband_BrainZ",
        "Armband_Refuge",
        "Armband_RSTA",
        "Armband_Snake",
        "Armband_BisexualFlag",
        "Armband_MotherOfAll",
        "Armband_BrainPlate",
        "Armband_MushroomDrawing",
        "Armband_FaceDry",
        "Armband_Mushroom",
        "Armband_GBPrideFlag",
        "Armband_Octopus",
        "Armband_HeterosexualFlag",
        "Armband_PrideFlag",
        "Armband_HummingBird",
        "Armband_Reaper",
        "Armband_Ireland",
        "Armband_SantaMuerte",
        "Armband_JeMeSouviens",
        "Armband_TransFlag",
        "Armband_Jurassic",
        "Armband_Turkey",
        "Armband_Kraken",
        "Armband_Ukraine",
        "Armband_Lilith",
        "Armband_ViveLeQuebecWeed",
        "Armband_MaineState",
    };
  }
};