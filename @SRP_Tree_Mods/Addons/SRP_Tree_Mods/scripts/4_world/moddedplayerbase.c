modded class PlayerBase
{
  int m_alcoholConsumed = 0;
  int m_alcoholMax = 100;

  EffectSound m_AcidSounds;
  EffectSound m_SleepSounds;

  void SendMessageToClient( Object reciever, string message ) //sends given string to client, don't use if not nescessary
	{
		PlayerBase man;
    Param1<string> m_MessageParam = new Param1<string>(message);
		if( GetGame().IsServer() && Class.CastTo(man, reciever) && m_MessageParam && reciever.IsAlive() && message != "" )
		{
			GetGame().RPCSingleParam(man, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, man.GetIdentity());
		}
	}

  bool HasSleepAgent()
  {
    return m_AgentPool.HasAgent(SRP_Medical_Agents.SLEEP_AGENT);
  }

  void SetPlayerSleepingMdfr(bool isSleeping){
    PluginTransmissionAgents transmissionAgents = PluginTransmissionAgents.Cast(GetPlugin(PluginTransmissionAgents));
    AgentBase agent = transmissionAgents.GetAgentByAgentId(SRP_Medical_Agents.SLEEP_AGENT);
    
    if (isSleeping && agent) {
      // Print("sleeping and agent is not null");
      SleepAgent.Cast(agent).GoToSleep();
    } else if (!isSleeping && agent){
      // Print("not sleeping and agent is not null");
      SleepAgent.Cast(agent).WakeUp();
    }

    if (!HasSleepAgent()) {
      // Print("Insert Agent");
      InsertAgent(SRP_Medical_Agents.SLEEP_AGENT);
    }
  }

  void TryYawn(bool isMale) {    
    // Print("SRP Modded Playerbase:: TryYawn chance to yawn: " + chance);
    if (isMale) {
      PlaySoundSet(m_SleepSounds, SRP_SoundSets_Yawns_Male.GetRandomElement(), 0, 0);
    } else {
      PlaySoundSet(m_SleepSounds, SRP_SoundSets_Yawns_Female.GetRandomElement(), 0, 0);
    }
  }

  void PlayScarySound() {
    float chance = Math.RandomFloat01() * 100;
    string soundSet = "";
    if (chance < 25) {
      soundSet = SRP_SoundSets_ZombieAttack.GetRandomElement();       
    } else if (chance < 50) {
      soundSet = SRP_SoundSets_CallToArms.GetRandomElement();       
    } else if (chance < 75) {
      soundSet = SRP_SoundSets_Wolf.GetRandomElement();       
    } else {
      soundSet = SRP_SoundSets_Bear.GetRandomElement();       
    }
    PlaySoundSet(m_AcidSounds, soundSet, 0, 0);
  }

  void PlayHappySound() {
    float chance = Math.RandomFloat01() * 100;
    string soundSet = "";
    if (chance < 20) {
      soundSet = SRP_SoundSets_SheepBleats.GetRandomElement();       
    } else if (chance < 40) {
      soundSet = SRP_SoundSets_HogGrunts.GetRandomElement();       
    } else if (chance < 60) {
      soundSet = SRP_SoundSets_Cows.GetRandomElement();       
    } else if (chance < 80) {
      soundSet = SRP_SoundSets_Chicken.GetRandomElement();       
    } else {
      soundSet = SRP_SoundSets_Deer.GetRandomElement();       
    }
    PlaySoundSet(m_AcidSounds, soundSet, 0, 0);
  }

  void DisableAllMyModifiers() {
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TEST );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_STONED );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TOBACCO );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSMILE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSKULL );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_MUSHROOMS );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_METH );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_COCAINE );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_PCP );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_HEROINE );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ALCOHOL );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BATHSALTS );    
  }

  void RemoveAllSymptoms() {
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_TEST);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_TOBACCO);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSMILE);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSKULL);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_MUSHROOMS);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_COCAINE);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_PCP);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_HEROINE);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ALCOHOL);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_BATHSALTS);
  }
};