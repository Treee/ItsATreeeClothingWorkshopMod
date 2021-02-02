// custom code to make sleeping "cover the head" so vision is blocked
modded class EmoteLyingDown
{
	override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetEmoteManager().m_IsLayDown = true;
	}
}

class EmoteLaughing extends EmoteBase
{
	void EmoteLaughing()
	{
		m_ID = EmoteConstants.ID_EMOTE_LAUGH;
    m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD;
		m_FullbodyCallbackUID = DayZPlayerConstants.CMD_GESTUREFB_NODHEAD;
		m_HideItemInHands = false;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    // m_Player.GetPlayerSoundEventHandler().PlayRequest(13, false);
    m_Player.RequestSoundEvent(EPlayerSoundEventID.SYMPTOM_LAUGHTER);
	}
}

class EmoteCoughing extends EmoteBase
{
	void EmoteCoughing()
	{
		m_ID = EmoteConstants.ID_EMOTE_COUGH;
    m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD;
		m_FullbodyCallbackUID = DayZPlayerConstants.CMD_GESTUREFB_NODHEAD;
		m_HideItemInHands = false;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    // m_Player.GetPlayerSoundEventHandler().PlayRequest(12, false);
    m_Player.RequestSoundEvent(EPlayerSoundEventID.SYMPTOM_COUGH);
	}
}

class EmoteSneezing extends EmoteBase
{
	void EmoteSneezing()
	{
		m_ID = EmoteConstants.ID_EMOTE_SNEEZE;
    m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD;
		m_FullbodyCallbackUID = DayZPlayerConstants.CMD_GESTUREFB_NODHEAD;
		m_HideItemInHands = false;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    // m_Player.GetPlayerSoundEventHandler().PlayRequest(14, false);
    m_Player.RequestSoundEvent(EPlayerSoundEventID.SYMPTOM_SNEEZE);    
	}
}

class EmoteShiver extends EmoteBase
{
	void EmoteShiver()
	{
		m_ID = EmoteConstants.ID_EMOTE_SHIVER;
    m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD;
		m_FullbodyCallbackUID = DayZPlayerConstants.CMD_GESTUREFB_NODHEAD;
		m_HideItemInHands = false;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    // PlayAnimationADD(2);
    // DayZPlayerSyncJunctures.SendPlayerSymptomADD(m_Player, 2, SymptomIDs.SYMPTOM_FREEZE);
    m_Player.RequestSoundEvent(EPlayerSoundEventID.FREEZING);
    // ref SymptomBase symp = m_Player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FREEZE);
    // symp.SetDuration(5);    
	}
}

class EmoteUnconscious extends EmoteBase
{
	void EmoteUnconscious()
	{
		m_ID = EmoteConstants.ID_EMOTE_UNCONSCIOUS;
    m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD;
		m_FullbodyCallbackUID = DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN;
		m_HideItemInHands = false;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetEmoteManager().m_IsUnconscious = !m_Player.GetEmoteManager().m_IsUnconscious;
	}
}

class EmoteBreakLeg extends EmoteBase
{
	void EmoteBreakLeg()
	{
		m_ID = EmoteConstants.ID_EMOTE_BREAK_LEG;
		m_StanceMaskAdditive = 0;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_AdditiveCallbackUID = 0;
		m_FullbodyCallbackUID = DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN;
		m_HideItemInHands = false;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    // really hurts the player... 
    m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_BROKEN_LEGS);    
	}
}