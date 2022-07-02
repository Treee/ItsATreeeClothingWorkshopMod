// modded class DayZPlayerImplementJumpClimb
// {
// 	const vector CAPTURE_VELOCITY = { 10, 10, 10 };
// 	override void Jump()
// 	{
// 		m_bIsJumpInProgress = true;
// 		m_Player.SetFallYDiff(m_Player.GetPosition()[1]);

// 		m_Player.OnJumpStart();

//     PlayerBase pb = PlayerBase.Cast(m_Player);
//     float jumpHeight = 2.6;
//     if (pb)
//     {
//       jumpHeight = pb.SRPGetJumpHeight();
//     }
    
//     m_Player.StartCommand_Fall(jumpHeight);
// 		m_Player.StopHandEvent();
// 	}
// };