modded class EmoteLyingDown
{
	override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	{
    m_Player.GetEmoteManager().m_IsLayDown = true;
	}
}