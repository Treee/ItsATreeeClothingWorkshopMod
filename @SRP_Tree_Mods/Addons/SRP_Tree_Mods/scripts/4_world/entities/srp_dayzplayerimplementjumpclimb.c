modded class DayZPlayerImplementJumpClimb
{
	override void Jump()
	{
		m_bIsJumpInProgress = true;
		m_Player.SetFallYDiff(m_Player.GetPosition()[1]);

		m_Player.OnJumpStart();
    
    EntityAI maskAttachment = m_Player.FindAttachmentBySlotName("Armband");
    if (maskAttachment && maskAttachment.GetType() == "DUB_Monster"){
      m_Player.StartCommand_Fall(15);
    }
    else {
		  m_Player.StartCommand_Fall(2.6);  // default
    }
		m_Player.StopHandEvent();
	}
}
