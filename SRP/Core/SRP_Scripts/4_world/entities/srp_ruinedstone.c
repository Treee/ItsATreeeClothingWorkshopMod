class Stone_Ruined extends Stone
{
  override void EEInit() 
  {
		super.EEInit();
    if ( GetGame().IsDedicatedServer() ) // Multiplayer server
    {
      AddHealth(-200);
    }
	}
};