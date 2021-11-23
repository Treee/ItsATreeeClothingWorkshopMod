class ActionSRPInjectSelf: ActionInjectSelf
{
	override void ApplyModifiers( ActionData action_data )
	{
    string injectionType = action_data.m_MainItem.GetType();    
    if (injectionType == "SRP_FullSyringe_Kuru")
    {
      action_data.m_Player.InsertAgent(eAgents.BRAIN, 2000); // max of 5000
    }
    else if (injectionType == "SRP_FullSyringe_KuruCure")
    {
      action_data.m_Player.InsertAgent(eAgents.BRAIN,-5000);
      action_data.m_Player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_BRAIN);
      action_data.m_Player.RemoveAgent(eAgents.BRAIN);    
    }
    else if (injectionType == "SRP_FullSyringe_Salmonella")
    {
      action_data.m_Player.InsertAgent(eAgents.SALMONELLA, 100); // max of 300
    }
    else if (injectionType == "SRP_FullSyringe_SalmonellaCure")
    {
      action_data.m_Player.InsertAgent(eAgents.SALMONELLA,-300);
      action_data.m_Player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_SALMONELLA);
      action_data.m_Player.RemoveAgent(eAgents.SALMONELLA);    
    }
    else if (injectionType == "SRP_FullSyringe_Influenza")
    {
      action_data.m_Player.InsertAgent(eAgents.INFLUENZA, 100); // max of 1000
    }
    else if (injectionType == "SRP_FullSyringe_InfluenzaCure")
    {
      action_data.m_Player.InsertAgent(eAgents.INFLUENZA,-1000);
      action_data.m_Player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_COMMON_COLD);
      action_data.m_Player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_INFLUENZA);
      action_data.m_Player.RemoveAgent(eAgents.INFLUENZA);    
    }
    else if (injectionType == "SRP_FullSyringe_Cholera")
    {
      action_data.m_Player.InsertAgent(eAgents.CHOLERA, 100); // max of 1000
    }
    else if (injectionType == "SRP_FullSyringe_CholeraCure")
    {
      action_data.m_Player.InsertAgent(eAgents.CHOLERA,-1000);
      action_data.m_Player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_CHOLERA);
      action_data.m_Player.RemoveAgent(eAgents.CHOLERA);    
    }
    else if (injectionType == "SRP_FullSyringe_Ceftazidim")
    { // filter
		  action_data.m_Player.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CHARCOAL);
    }
    else if (injectionType == "SRP_FullSyringe_Ampicillin")
    { // antibiotic
		  action_data.m_Player.m_ModifiersManager.ActivateModifier(eModifiers.MDF_ANTIBIOTICS);
    }
	}
};

class ActionSRPInjectTarget: ActionInjectTarget
{
	override void ApplyModifiers( ActionData action_data )
	{
    string injectionType = action_data.m_MainItem.GetType();   
    PlayerBase ntarget = PlayerBase.Cast(action_data.m_Target.GetObject());

    if (injectionType == "SRP_FullSyringe_Kuru")
    {
      ntarget.InsertAgent(eAgents.BRAIN, 2000); // max of 5000
    }
    else if (injectionType == "SRP_FullSyringe_KuruCure")
    {
      ntarget.InsertAgent(eAgents.BRAIN,-5000);
      ntarget.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_BRAIN);
      ntarget.RemoveAgent(eAgents.BRAIN);    
    }
    else if (injectionType == "SRP_FullSyringe_Salmonella")
    {
      ntarget.InsertAgent(eAgents.SALMONELLA, 100); // max of 300
    }
    else if (injectionType == "SRP_FullSyringe_SalmonellaCure")
    {
      ntarget.InsertAgent(eAgents.SALMONELLA,-300);
      ntarget.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_SALMONELLA);
      ntarget.RemoveAgent(eAgents.SALMONELLA);    
    }
    else if (injectionType == "SRP_FullSyringe_Influenza")
    {
      ntarget.InsertAgent(eAgents.INFLUENZA, 100); // max of 1000
    }
    else if (injectionType == "SRP_FullSyringe_InfluenzaCure")
    {
      ntarget.InsertAgent(eAgents.INFLUENZA,-1000);
      ntarget.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_COMMON_COLD);
      ntarget.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_INFLUENZA);
      ntarget.RemoveAgent(eAgents.INFLUENZA);    
    }
    else if (injectionType == "SRP_FullSyringe_Cholera")
    {
      ntarget.InsertAgent(eAgents.CHOLERA, 100); // max of 1000
    }
    else if (injectionType == "SRP_FullSyringe_CholeraCure")
    {
      ntarget.InsertAgent(eAgents.CHOLERA,-1000);
      ntarget.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_CHOLERA);
      ntarget.RemoveAgent(eAgents.CHOLERA);    
    }
    else if (injectionType == "SRP_FullSyringe_Ceftazidim")
    { // filter
		  ntarget.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CHARCOAL);
    }
    else if (injectionType == "SRP_FullSyringe_Ampicillin")
    { // antibiotic
		  ntarget.m_ModifiersManager.ActivateModifier(eModifiers.MDF_ANTIBIOTICS);
    }
	}
};