class EmoteLaughing extends EmoteBase
{
	void EmoteLaughing()
	{
		m_ID = EmoteConstants.ID_EMOTE_LAUGH;
    m_StanceMaskAdditive = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_StanceMaskFullbody = DayZPlayerConstants.STANCEMASK_PRONE;
		m_AdditiveCallbackUID = DayZPlayerConstants.CMD_GESTUREMOD_NODHEAD;
		m_FullbodyCallbackUID = DayZPlayerConstants.CMD_GESTUREFB_NODHEAD;
		m_HideItemInHands = true;
  }

  override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetPlayerSoundEventHandler().PlayRequest(13, false);
	}
}