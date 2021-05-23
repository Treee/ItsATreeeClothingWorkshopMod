class EmoteCoughing extends EmoteBase
{
	void EmoteCoughing()
	{
		m_ID = EmoteConstants.SRP_EMOTE_COUGH;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden because symptom manager has its own additive callback stuff so we just ignore ours.
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetSymptomManager().QueueUpPrimarySymptom( SymptomIDs.SYMPTOM_COUGH );
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteBlind extends EmoteBase // work in progress
{
	void EmoteBlind()
	{
		m_ID = EmoteConstants.SRP_EMOTE_BLINDNESS;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetSymptomManager().QueueUpSecondarySymptom(SymptomIDs.SYMPTOM_FEVERBLUR);
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteBulletHit extends EmoteBase
{
	void EmoteBulletHit()
	{
		m_ID = EmoteConstants.SRP_EMOTE_BULLET_HIT;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.AddHealth("", "Blood", -500); //do 250 blood dmg
    m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll");
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteBleedingSource extends EmoteBase
{
	void EmoteBleedingSource()
	{
		m_ID = EmoteConstants.SRP_EMOTE_BLEEDING_SOURCE;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll");
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteBloodloss extends EmoteBase
{
	void EmoteBloodloss()
	{
		m_ID = EmoteConstants.SRP_EMOTE_BLOODLOSS;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.AddHealth("", "Blood", -500); //do 250 blood dmg
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteSneeze extends EmoteBase
{
	void EmoteSneeze()
	{
		m_ID = EmoteConstants.SRP_EMOTE_SNEEZE;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetSymptomManager().QueueUpPrimarySymptom( SymptomIDs.SYMPTOM_SNEEZE );
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteFeverBlur extends EmoteBase // work in progress
{
	void EmoteFeverBlur()
	{
		m_ID = EmoteConstants.SRP_EMOTE_FEVERBLUR;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetSymptomManager().QueueUpSecondarySymptom( SymptomIDs.SYMPTOM_FEVERBLUR );
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteLaughter extends EmoteBase
{
	void EmoteLaughter()
	{
		m_ID = EmoteConstants.SRP_EMOTE_LAUGHTER;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetSymptomManager().QueueUpPrimarySymptom( SymptomIDs.SYMPTOM_LAUGHTER );
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteUnconscious extends EmoteBase
{
	void EmoteUnconscious()
	{
		m_ID = EmoteConstants.SRP_EMOTE_UNCONSCIOUS;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.SetHealth("", "Shock", 0);
    m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_UNCONSCIOUSNESS);
	}
}

class EmoteFreeze extends EmoteBase
{
	void EmoteFreeze()
	{
		m_ID = EmoteConstants.SRP_EMOTE_FREEZE;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetSymptomManager().QueueUpPrimarySymptom( SymptomIDs.SYMPTOM_FREEZE );
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteHot extends EmoteBase
{
	void EmoteHot()
	{
		m_ID = EmoteConstants.SRP_EMOTE_HOT;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetSymptomManager().QueueUpPrimarySymptom( SymptomIDs.SYMPTOM_HOT );
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

class EmoteLegBreak extends EmoteBase
{
	void EmoteLegBreak()
	{
		m_ID = EmoteConstants.SRP_EMOTE_LEGBREAK;
		m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = 0;
		m_HideItemInHands = false;
  }

  // we have this overridden 
  override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
  {
    return true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_BROKEN_LEGS);
    m_Player.SetInventorySoftLock(false);
    m_Player.GetEmoteManager().SetEmoteLockState(false);
	}
}

// custom code to make sleeping "cover the head" so vision is blocked
modded class EmoteLyingDown
{
	override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetEmoteManager().m_IsLayDown = true;
	}
}