class SRP_DecontaminationShower extends DeployableContainer_Base
{
  EffectSound m_ShowerSounds;

  bool m_IsPlayingSound;

  void SRP_DecontaminationShower()
  {
    m_IsPlayingSound = false;
    RegisterNetSyncVariableBool("m_IsPlayingSound");
  }

	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }

  void SetPlaying(bool isPlaying)
  {
    m_IsPlayingSound = isPlaying;
    SetSynchDirty();
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (m_IsPlayingSound)      
    {
      PlaySound();
    }
  };

  void PlaySound()
  {
    PlaySoundSet(m_ShowerSounds, "ExtinguishByWater_SoundSet", 0, 0);
    AddHealth(-5);
    m_IsPlayingSound = false;
    SetSynchDirty();
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_DecontaminationShower_Red extends SRP_DecontaminationShower{};
class SRP_DecontaminationShower_Yellow extends SRP_DecontaminationShower{};
