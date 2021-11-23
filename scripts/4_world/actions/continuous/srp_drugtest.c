class ActionTestDrugsTarget extends ActionTestBloodTarget
{	
	override void OnFinishProgressServer( ActionData action_data )
	{	
    super.OnFinishProgressServer(action_data);
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
        
    super.OnFinishProgressServer(action_data);    

    string testResult = "";
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_TOBACCO )) 
    {
      testResult += "Tobacco: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_STONED )) 
    { 
      testResult += "THC: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSMILE ) || ntarget.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSKULL )) 
    {
      testResult += "LSD: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_METH )) 
    {
      testResult += "Meth: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BATHSALTS )) 
    {
      testResult += "Bath Salts: Positive | ";
    }

    if (testResult == "") {
      testResult = "Test Results Negative";
    }
		ntarget.SendMessageToClient(ntarget, testResult);
	}
};

class ActionTestDrugsSelf extends ActionTestBloodSelf
{
	override void OnFinishProgressServer( ActionData action_data )
	{
    super.OnFinishProgressServer(action_data);    

    string testResult = "";
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_TOBACCO )) 
    {
      testResult += "Tobacco: Positive | ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_STONED )) 
    { 
      testResult += "THC: Positive | ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSMILE ) || action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ACIDSKULL )) 
    {
      testResult += "LSD: Positive | ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_METH )) 
    {
      testResult += "Meth: Positive | ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_BATHSALTS )) 
    {
      testResult += "Bath Salts: Positive | ";
    }

    if (testResult == "") {
      testResult = "Test Results Negative";
    }
		action_data.m_Player.SendMessageToClient(action_data.m_Player, testResult);
	}
};