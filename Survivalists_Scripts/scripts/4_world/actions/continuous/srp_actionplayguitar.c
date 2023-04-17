class ActionPlayGuitarOptionCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(180);
	}
};
class ActionPlayGuitarOption extends ActionSRPVariantIdOption
{	
  void ActionPlayGuitarOption()
	{
		m_CallbackClass = ActionPlayGuitarOptionCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
	}
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    m_Text = "No Option";
    SRP_Guitar_Alpocalypse guitar;
    if (Class.CastTo(guitar, item))
    {
      m_Text = "Play - " + guitar.GetSoundName(m_VariantID);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_Guitar_Alpocalypse guitar;
    if (Class.CastTo(guitar, item))
      return guitar.CanPlaySound();
    return false;	
  }
  override bool ActionConditionContinue( ActionData action_data )
	{
    SRP_Guitar_Alpocalypse guitar;
    if (Class.CastTo(guitar, action_data.m_MainItem))
      return !guitar.CanPlaySound();
    return false;		
  }
  override void OnStartServer(ActionData action_data)
	{
    SRP_Guitar_Alpocalypse guitar;
    int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
    if (Class.CastTo(guitar, action_data.m_MainItem))
      guitar.PlaySound(variantId);
  }
  override void OnEndServer(ActionData action_data)
	{
    SRP_Guitar_Alpocalypse guitar;
    if (Class.CastTo(guitar, action_data.m_MainItem))
      guitar.StopSound();
  }
  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_Guitar_Alpocalypse guitar;
    if (Class.CastTo(guitar, action_data.m_MainItem))
      guitar.StopSound();
	}
  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    SRP_Guitar_Alpocalypse guitar;
    if ( Class.CastTo(guitar, item) )
    {
      // Print("on update actions clothing cast: " + clothingItem);
      GetVariantManager().SetActionVariantCount(guitar.GetSoundsCount());
		}
		else
		{
      // Print("clear items");
			GetVariantManager().Clear();
		}
	}
};
