class ActionPlayMusicalInstrumentOptionCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(180);
	}
};
class ActionPlayMusicalInstrumentOption extends ActionSRPVariantIdOption
{	
  void ActionPlayMusicalInstrumentOption()
	{
		m_CallbackClass = ActionPlayMusicalInstrumentOptionCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
	}
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    m_Text = "No Option";
    SRP_MusicalInstrument_Base instrument;
    if (Class.CastTo(instrument, item))
    {
      m_Text = "Play - " + instrument.GetSoundName(m_VariantID);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_MusicalInstrument_Base instrument;
    if (Class.CastTo(instrument, item))
      return instrument.CanPlaySound();
    return false;	
  }
  override bool ActionConditionContinue( ActionData action_data )
	{
    SRP_MusicalInstrument_Base instrument;
    if (Class.CastTo(instrument, action_data.m_MainItem))
      return !instrument.CanPlaySound();
    return false;		
  }
  override void OnStartServer(ActionData action_data)
	{
    SRP_MusicalInstrument_Base instrument;
    int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
    if (Class.CastTo(instrument, action_data.m_MainItem))
      instrument.PlaySound(variantId);
  }
  override void OnEndServer(ActionData action_data)
	{
    SRP_MusicalInstrument_Base instrument;
    if (Class.CastTo(instrument, action_data.m_MainItem))
      instrument.StopSound();
  }
  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_MusicalInstrument_Base instrument;
    if (Class.CastTo(instrument, action_data.m_MainItem))
      instrument.StopSound();
	}
  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    SRP_MusicalInstrument_Base instrument;
    if ( Class.CastTo(instrument, item) )
    {
      // Print("on update actions clothing cast: " + clothingItem);
      GetVariantManager().SetActionVariantCount(instrument.GetSoundsCount());
		}
		else
		{
      // Print("clear items");
			GetVariantManager().Clear();
		}
	}
};
