modded class ActionTestBloodTarget
{	
	override void OnFinishProgressServer( ActionData action_data )
	{	
    super.OnFinishProgressServer(action_data);
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
        
    string testResult = "";
    string choleraSeverity = GetAgentSeverity(1000, ntarget.GetSingleAgentCount(eAgents.CHOLERA));
    if (choleraSeverity != "N/A") {
      testResult += "Cholera: " + choleraSeverity + " ";
    }
    string influenzaSeverity = GetAgentSeverity(1000, ntarget.GetSingleAgentCount(eAgents.INFLUENZA));
    if (influenzaSeverity != "N/A") {
      testResult += "Influenza: " + influenzaSeverity + " ";
    }
    string salmonellaSeverity = GetAgentSeverity(300, ntarget.GetSingleAgentCount(eAgents.SALMONELLA));
    if (salmonellaSeverity != "N/A") {
      testResult += "Salmonella: " + salmonellaSeverity + " ";
    }
    string kuruSeverity = GetAgentSeverity(5000, ntarget.GetSingleAgentCount(eAgents.BRAIN));
    if (kuruSeverity != "N/A") {
      testResult += "Kuru: " + kuruSeverity + " ";
    }
    string foodPoisoingSeverity = GetAgentSeverity(400, ntarget.GetSingleAgentCount(eAgents.FOOD_POISON));
    if (foodPoisoingSeverity != "N/A") {
      testResult += "Food Poisoning: " + foodPoisoingSeverity + " ";
    }
    string woundSeverity = GetAgentSeverity(1000, ntarget.GetSingleAgentCount(eAgents.WOUND_AGENT));    
    if (woundSeverity != "N/A") {
      testResult += "Wound Infection: " + woundSeverity + " ";
    }
    if (testResult == "") {
      testResult = "Blood Test Results Negative";
    }
		ntarget.SendMessageToClient(ntarget, testResult);
    action_data.m_Player.SendMessageToClient(action_data.m_Player, testResult);
	}

  string GetAgentSeverity(int maxAgents, int currentAgents) {
    // Print("Max Agents " + maxAgents + " current Agents: " + currentAgents);
    string severity = "N/A";
    if (currentAgents >= (maxAgents * 0.10) && currentAgents < (maxAgents * 0.25)) {
      severity = "Mild";
    } else if (currentAgents >= (maxAgents * 0.25) && currentAgents < (maxAgents * 0.5)) {
      severity = "Moderate";
    } else if (currentAgents >= (maxAgents * 0.5) && currentAgents < (maxAgents * 0.75)) {
      severity = "Severe";
    } else if (currentAgents >= (maxAgents * 0.75)){
      severity = "Critical";
    }
      return severity;
  }
};

modded class ActionTestBloodSelf
{
	override void OnFinishProgressServer( ActionData action_data )
	{
    super.OnFinishProgressServer(action_data);    

    string testResult = "";
    string choleraSeverity = GetAgentSeverity(1000, action_data.m_Player.GetSingleAgentCount(eAgents.CHOLERA));
    if (choleraSeverity != "N/A") {
      testResult += "Cholera: " + choleraSeverity + " ";
    }
    string influenzaSeverity = GetAgentSeverity(1000, action_data.m_Player.GetSingleAgentCount(eAgents.INFLUENZA));
    if (influenzaSeverity != "N/A") {
      testResult += "Influenza: " + influenzaSeverity + " ";
    }
    string salmonellaSeverity = GetAgentSeverity(300, action_data.m_Player.GetSingleAgentCount(eAgents.SALMONELLA));
    if (salmonellaSeverity != "N/A") {
      testResult += "Salmonella: " + salmonellaSeverity + " ";
    }
    string kuruSeverity = GetAgentSeverity(5000, action_data.m_Player.GetSingleAgentCount(eAgents.BRAIN));
    if (kuruSeverity != "N/A") {
      testResult += "Kuru: " + kuruSeverity + " ";
    }
    string foodPoisoingSeverity = GetAgentSeverity(400, action_data.m_Player.GetSingleAgentCount(eAgents.FOOD_POISON));
    if (foodPoisoingSeverity != "N/A") {
      testResult += "Food Poisoning: " + foodPoisoingSeverity + " ";
    }
    string woundSeverity = GetAgentSeverity(1000, action_data.m_Player.GetSingleAgentCount(eAgents.WOUND_AGENT));    
    if (woundSeverity != "N/A") {
      testResult += "Wound Infection: " + woundSeverity + " ";
    }
    if (testResult == "") {
      testResult = "Blood Test Results Negative";
    }
		action_data.m_Player.SendMessageToClient(action_data.m_Player, testResult);
	}

  string GetAgentSeverity(int maxAgents, int currentAgents) {
    // Print("Max Agents " + maxAgents + " current Agents: " + currentAgents);
    string severity = "N/A";
    if (currentAgents >= (maxAgents * 0.10) && currentAgents < (maxAgents * 0.25)) {
      severity = "Mild";
    } else if (currentAgents >= (maxAgents * 0.25) && currentAgents < (maxAgents * 0.5)) {
      severity = "Moderate";
    } else if (currentAgents >= (maxAgents * 0.5) && currentAgents < (maxAgents * 0.75)) {
      severity = "Severe";
    } else if (currentAgents >= (maxAgents * 0.75)){
      severity = "Critical";
    }
     return severity;
  }
};