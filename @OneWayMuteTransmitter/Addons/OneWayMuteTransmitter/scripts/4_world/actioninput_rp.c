class ToggleMuteTransmitterActionInput : DefaultActionInput
{
    ref ActionTarget target_new;
    
    void ToggleMuteTransmitterActionInput(PlayerBase player)
    {
        SetInput("UAToggleMuteTransmitter");
        m_InputType = ActionInputType.AIT_SINGLE;
    }
    
    override void UpdatePossibleActions(PlayerBase player, ActionTarget target, ItemBase item, int action_condition_mask)
    {
      if( ForceActionCheck(player) )
      {
          m_SelectAction = m_ForcedActionData.m_Action;
          return;
      }
      //ForceActionTarget(player.m_PlayerLightManager.
      
      m_SelectAction = NULL;
      array<ActionBase_Basic> possible_actions;
      ActionBase action;
      int i;

      m_MainItem = NULL;
      if ( player ) 
      {
          TransmitterBase radio = TransmitterBase.Cast(player.GetHumanInventory().GetEntityInHands());

          if ( radio )
          {

              target_new = new ActionTarget(radio, null, -1, vector.Zero, -1);
              ForceActionTarget(target_new);
          }

          else
              ClearForcedTarget();
      }
      
      target = m_ForcedTarget;
      m_Target = m_ForcedTarget;
      
      if(target && target.GetObject())
      {
          target.GetObject().GetActions(this.Type(), possible_actions);
          if(possible_actions)
          {
              for (i = 0; i < possible_actions.Count(); i++)
              {
                  action = ActionBase.Cast(possible_actions.Get(i));
                  if ( action.Can(player, target, m_MainItem, action_condition_mask) )
                  {
                      m_SelectAction = action;
                      return;
                  }
              }
          }
      }
    }
};