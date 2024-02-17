class SRP_BellTower_Base extends BuildingSuper
{
  protected EffectSound 	m_BellSound;

  override void SetActions()
	{
		super.SetActions();
		AddAction(SRP_ActionRingBell);
	}
  override bool IsBuilding()
	{
		return false;
	}

  override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx) 
	{
    if (rpc_type == SRP_RPC.SRPC_SOUND_BELL_TOLL)
    {
      bool playSound;
      vector pos;
      string sound_set;
      
      //Helicrash is a world event, we want anyone to be able to hear it
      Param3<bool, vector, int> playCrashSound = new Param3<bool, vector, int>(false, "0 0 0",0);
      if (ctx.Read(playCrashSound))
      {
        playSound = playCrashSound.param1;
        pos = playCrashSound.param2;
        sound_set = "Survivalists_Mods_Settlement_BellTower_ShoundSet";
      }
      
      if (playSound)
      {
        m_BellSound = SEffectManager.PlaySound(sound_set, pos, 0.1, 0.1);
        m_BellSound.SetAutodestroy(true);
      }
    }
    super.OnRPC(sender, rpc_type, ctx);
  };

  void RequestSoundEvent()
  {
    Param3<bool, vector, int> playSound = new Param3<bool, vector, int>(true, GetPosition(), 0);
		RPCSingleParam(SRP_RPC.SRPC_SOUND_BELL_TOLL, playSound, true);
  }
};
class Land_Building_srp_belltower_copper extends SRP_BellTower_Base{};
class Land_Building_srp_belltower_japanese extends SRP_BellTower_Base{};
class Land_Building_srp_belltower_short extends SRP_BellTower_Base{};
