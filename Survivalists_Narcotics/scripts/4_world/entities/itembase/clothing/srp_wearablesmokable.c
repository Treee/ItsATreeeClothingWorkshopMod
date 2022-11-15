class SRP_SmokableWearable_ColorBase extends Clothing
{
  protected Particle m_SmokeParticle;
  protected bool m_IsIgnited = false;

  void SRP_SmokableWearable_ColorBase()
  {
    RegisterNetSyncVariableBool( "m_IsIgnited" );
  }

	void ~SRP_SmokableWearable_ColorBase()
	{
		ExtinguishSmokable();
	}
  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (m_IsIgnited)
    {
      LightSmokable();
    }
    else
    {
      ExtinguishSmokable();
    }
	}
  void ExtinguishSmokable()
	{
    if (GetGame() && GetGame().IsDedicatedServer())
    {
      SetLit(false);
      SetSynchDirty();
      return;
    }
		if ( m_SmokeParticle && GetGame() && !GetGame().IsDedicatedServer() )
		{
			m_SmokeParticle.Stop();
      m_SmokeParticle = null;
		}    
	}
  void LightSmokable()
  {    
    if (GetGame().IsDedicatedServer())
    {
      SetLit(true);
      SetSynchDirty();
      return;
    }
		if ( !m_SmokeParticle && GetGame() && !GetGame().IsDedicatedServer() )
    {
      m_SmokeParticle = ParticleManager.GetInstance().PlayOnObject( ParticleList.CAMP_NORMAL_SMOKE, this, GetSmokeEffectPosition() );
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.001);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.001);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY_RND, 0.001);
    }
  }
  void SetLit(bool isLit) 
  {
    m_IsIgnited = isLit;
  }
  bool IsLit() 
  {
    return m_IsIgnited;
  }

  override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
	{
		PlayerBase old_Player;
    SRP_SwitchAndIgniteLambda lambda;
		if ( GetGame().IsDedicatedServer() && oldLoc.GetParent() && Class.CastTo(old_Player, oldLoc.GetParent().GetHierarchyRootPlayer()) )
		{
      if (newLoc.GetType() != InventoryLocationType.HANDS)
      {
        lambda = new SRP_SwitchAndIgniteLambda(this, GetSmokableType(), old_Player, IsLit());
		    MiscGameplayFunctions.TurnItemIntoItemEx(old_Player, lambda);
      }
      else
      {
        PlayerBase new_Player;
		    if ( GetGame().IsDedicatedServer() && newLoc.GetParent() && Class.CastTo(new_Player, newLoc.GetParent().GetHierarchyRootPlayer()) )
        {
          lambda = new SRP_SwitchAndIgniteLambda(this, GetSmokableType(), new_Player, IsLit());
          new_Player.ServerReplaceItemInHandsWithNew(lambda);
        }
      }
    }
		super.EEItemLocationChanged(oldLoc, newLoc);
  }

  string GetSmokableType()
  {
    if (GetType() == "SRP_SmokableWearable_SmokingPipe")    
      return "SRP_SmokingPipe";    
    return string.Format("SRP_Smokable_%1",ConfigGetString("color"));
  }
  vector GetSmokeEffectPosition()
  {
    return Vector(0.037, 1.591, 0.126);
  }
}


class SRP_SmokableWearable_ZWeed extends SRP_SmokableWearable_ColorBase{};
class SRP_SmokableWearable_ZWeedIrradiated extends SRP_SmokableWearable_ColorBase{};
class SRP_SmokableWearable_Cigarette extends SRP_SmokableWearable_ColorBase{};
class SRP_SmokableWearable_Cigar extends SRP_SmokableWearable_ColorBase
{
  override vector GetSmokeEffectPosition()
  {
    return Vector(0.048, 1.608, 0.223);
  }
};
class SRP_SmokableWearable_SmokingPipe extends SRP_SmokableWearable_ColorBase
{
  override vector GetSmokeEffectPosition()
  {
    return Vector(0.067, 1.578, 0.182);
  }
};