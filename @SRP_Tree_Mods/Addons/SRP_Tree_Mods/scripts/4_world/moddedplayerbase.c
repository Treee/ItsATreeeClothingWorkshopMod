modded class PlayerBase
{
  int m_alcoholConsumed = 0;
  int m_alcoholMax = 100;

  EffectSound m_AcidSounds;
  EffectSound m_SleepSounds;

  float m_randomChance = 0;

  float m_drugHue = 60;
  float m_drugRadialXBlur = 0;
  float m_drugRadialYBlur = 0;
  float m_drugChromaX = 0;
  float m_drugChromaY = 0;
  float m_drugRadialXOffset = 0;
  float m_drugRadialYOffset = 0;


  void SendMessageToClient( Object reciever, string message ) //sends given string to client, don't use if not nescessary
	{
		PlayerBase man;
    Param1<string> m_MessageParam = new Param1<string>(message);
		if( GetGame().IsServer() && Class.CastTo(man, reciever) && m_MessageParam && reciever.IsAlive() && message != "" )
		{
			GetGame().RPCSingleParam(man, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, man.GetIdentity());
		}
	}

  override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, rpc_type, ctx);
		if (rpc_type == SRP_ERPCs.RPC_DRUGS_WEED) {
      StonedModifier(ctx);
    } else if (rpc_type == SRP_ERPCs.RPC_DRUGS_TOBACCO) {
      TobaccoModifier(ctx);
    } else if (rpc_type == SRP_ERPCs.RPC_DRUGS_SALTS) {
      BathSaltsModifier(ctx);
    } else if (rpc_type == SRP_ERPCs.RPC_DRUGS_METH) {
      MethModifier(ctx);
    } else if (rpc_type == SRP_ERPCs.RPC_DRUGS_ACID) {
      AcidModifier(ctx);
    } else if (rpc_type == SRP_ERPCs.RPC_DRUGS_ALCOHOL) {
      AlcoholModifier(ctx);
    } else if (rpc_type == SRP_ERPCs.RPC_DRUGS_TEST) {
      AlcoholModifier(ctx);
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

  void TryYawn() {    
    float chance = Math.RandomFloat01() * 100;
    // Print("SRP Modded Playerbase:: TryYawn chance to yawn: " + chance);
    if (chance > 97) {
      PlaySoundSet(m_SleepSounds, SRP_SoundSets_Yawns.Get(0), 0, 0);
    }
  }

  string GetScarySound() {
    float chance = Math.RandomFloat01() * 100;
    // Print("GetScarySound " + chance);
    if (chance < 25) {
      return SRP_SoundSets_ZombieAttack.GetRandomElement();       
    } else if (chance < 50) {
      return SRP_SoundSets_CallToArms.GetRandomElement();       
    } else if (chance < 75) {
      return SRP_SoundSets_Wolf.GetRandomElement();       
    } else {
      return SRP_SoundSets_Bear.GetRandomElement();       
    }
  }

  string GetHappySound() {
    float chance = Math.RandomFloat01() * 100;
    // Print("GetHappySound " + chance);
    if (chance < 20) {
      return SRP_SoundSets_SheepBleats.GetRandomElement();       
    } else if (chance < 40) {
      return SRP_SoundSets_HogGrunts.GetRandomElement();       
    } else if (chance < 60) {
      return SRP_SoundSets_Cows.GetRandomElement();       
    } else if (chance < 80) {
      return SRP_SoundSets_Chicken.GetRandomElement();       
    } else {
      return SRP_SoundSets_Deer.GetRandomElement();       
    }
  }

  void ModifyPPEEffect() {
    CameraEffects.changeRadBlurXEffect(m_drugRadialXBlur);
    CameraEffects.changeRadBlurYEffect(m_drugRadialYBlur);
    
    CameraEffects.changeRadBlurXOffsetEffect(m_drugRadialXOffset);
    CameraEffects.changeRadBlurXOffsetEffect(m_drugRadialYOffset);

    CameraEffects.changeChromaX(m_drugChromaX);
    CameraEffects.changeChromaY(m_drugChromaY);

    CameraEffects.changeHue(m_drugHue);
  }

  void DisableAllMyModifiers() {
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TEST );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_STONED );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TOBACCO );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSMILE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSKULL );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_MUSHROOMS );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_METH );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_COCAINE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_PCP );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_HEROINE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ALCOHOL );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BATHSALTS );    
  }

  // Drug Effects
  void StonedModifier(ParamsReadContext ctx) {
    Param2<float, float> data;
    if ( !ctx.Read( data ) ) return; // auto return if we dont have data

    m_drugHue += data.param1;
    m_drugRadialXBlur += data.param2;
    m_drugRadialYBlur += data.param2;

    ModifyPPEEffect();
    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance > 90 && m_randomChance <= 95)
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    } 
    else if (m_randomChance > 95)
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
  }
  
  void TobaccoModifier(ParamsReadContext ctx) {
    Param2<float, float> data;
    if ( !ctx.Read( data ) ) return; // auto return if we dont have data
    
    m_drugHue += data.param1;
    m_drugRadialXBlur += data.param2;
    m_drugRadialYBlur += data.param2;
    
    ModifyPPEEffect();
    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance > 90) // 20% chance to cough
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }
  }

  void BathSaltsModifier(ParamsReadContext ctx) {
    Param5<float, float, float, float, float> data;
    if ( !ctx.Read( data ) ) return; // auto return if we dont have data
    
    m_drugHue += data.param1;
    m_drugRadialXBlur += data.param2;
    m_drugRadialYBlur += data.param3;
    m_drugChromaX += data.param4;
    m_drugChromaY += data.param5;

    ModifyPPEEffect();
    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance > 70 && m_randomChance <= 80)
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FEVERBLUR);
    }
    else if (m_randomChance > 80 && m_randomChance <= 90)
    {
      PlaySoundSet(m_AcidSounds, GetScarySound(), 0, 0);
    }
    else if (m_randomChance > 90) {
      PlaySoundSet(m_AcidSounds, GetHappySound(), 0, 0);
    }
    // Print("BathSaltsModifier radialBlurX: " + radialBlurX + " chromaX: " + chromaX + " chromaY: " + chromaY);
  }

  void MethModifier(ParamsReadContext ctx) {
    Param2<float, float> data;
    if ( !ctx.Read( data ) ) return; // auto return if we dont have data
    
    m_drugHue += data.param1;
    m_drugRadialXBlur += data.param2;
    m_drugRadialYBlur += data.param2;

    ModifyPPEEffect();

    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance > 85 && m_randomChance <= 90) // 15% m_randomChance to laugh
    {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (m_randomChance > 90 && m_randomChance <= 95)
    {
      PlaySoundSet(m_AcidSounds, GetScarySound(), 0, 0);
    } else if (m_randomChance > 95) {
      PlaySoundSet(m_AcidSounds, GetHappySound(), 0, 0);
    }    
    // Print("BathSaltsModifier radialBlurX: " + radialBlurX + " chromaX: " + chromaX + " chromaY: " + chromaY);
  }

  void AcidModifier(ParamsReadContext ctx) {
    Param5<float, float, float, float, float> data;
    if ( !ctx.Read( data ) ) return; // auto return if we dont have data
    
    m_drugHue += data.param1;
    m_drugRadialXBlur += data.param2;
    m_drugRadialYBlur += data.param3;
    m_drugChromaX += data.param4;
    m_drugChromaY += data.param5;
    
    ModifyPPEEffect();
    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance > 70 && m_randomChance <= 90)
    {
      PlaySoundSet(m_AcidSounds, GetScarySound(), 0, 0);
    } else if (m_randomChance > 90) {
      PlaySoundSet(m_AcidSounds, GetHappySound(), 0, 0);
    }
    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance > 10 && m_randomChance <= 30) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (m_randomChance > 30 && m_randomChance <= 40) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FREEZE);
    } else if (m_randomChance > 40 && m_randomChance <= 60) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
    } else if (m_randomChance > 60 && m_randomChance <= 80) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
    } else if (m_randomChance > 80 && m_randomChance <= 90) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    } else if (m_randomChance > 90 && m_randomChance <= 100) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
    }
    // Print("AcidModifier chroma: " + chroma + " radial: " + radialBlur + " hue: " + hue);
  }

  void AlcoholModifier(ParamsReadContext ctx) {
    Param4<float, float, float, float> data;
    if ( !ctx.Read( data ) ) return; // auto return if we dont have data
    
    m_drugHue += data.param1;
    m_drugRadialXBlur += data.param2;
    m_drugRadialYBlur += data.param2;
    m_drugRadialXOffset += data.param3;
    m_drugRadialYOffset += data.param4;

    ModifyPPEEffect();
    
    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance >= 85) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    // Print("AlcoholModifier: "radial: " + radialBlur + " hue: " + hue);
  }

  void TestModifier(ParamsReadContext ctx) {
    Param4<float, float, float, float> data;
    if ( !ctx.Read( data ) ) return; // auto return if we dont have data
    
    m_drugHue += data.param1;
    m_drugRadialXBlur += data.param2;
    m_drugRadialYBlur += data.param2;
    m_drugRadialXOffset += data.param3;
    m_drugRadialYOffset += data.param4;

    ModifyPPEEffect();
    
    m_randomChance = Math.RandomFloat01() * 100;
    if (m_randomChance >= 85) {
      GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
    }
    // Print("AlcoholModifier: "radial: " + radialBlur + " hue: " + hue);
  }
};