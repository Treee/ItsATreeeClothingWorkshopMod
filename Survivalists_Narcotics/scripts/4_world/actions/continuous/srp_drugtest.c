class ActionTestDrugsTarget extends ActionTestBloodTarget
{	
  override string GetText()
  {
    return "Test for Drugs";
  }

	override void OnFinishProgressServer( ActionData action_data )
	{	
    super.OnFinishProgressServer(action_data);
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
  
    string testResult = "";
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_TOBACCO )) 
    {
      testResult += "Tobacco: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_STONED )) 
    { 
      testResult += "THC: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSMILE ) || ntarget.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSKULL )) 
    {
      testResult += "LSD: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_METH )) 
    {
      testResult += "Meth: Positive | ";
    }
    if (ntarget.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_BATHSALTS )) 
    {
      testResult += "Bath Salts: Positive | ";
    }

    if (testResult == "") {
      testResult = "Drug Test Results Negative";
    }
		SendMessageToClient(ntarget, testResult);
	}
};

class ActionTestDrugsSelf extends ActionTestBloodSelf
{
  override string GetText()
  {
    return "Test for Drugs";
  }

	override void OnFinishProgressServer( ActionData action_data )
	{
    super.OnFinishProgressServer(action_data);    

    string testResult = "";
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_TOBACCO )) 
    {
      testResult += "Tobacco: Positive ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_STONED )) 
    { 
      testResult += "THC: Positive ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSMILE ) || action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSKULL )) 
    {
      testResult += "LSD: Positive ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_METH )) 
    {
      testResult += "Meth: Positive ";
    }
    if (action_data.m_Player.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_BATHSALTS )) 
    {
      testResult += "Bath Salts: Positive ";
    }

    if (testResult == "") {
      testResult = "Drug Test Results Negative";
    }
		SendMessageToClient(action_data.m_Player, testResult);
	}
};