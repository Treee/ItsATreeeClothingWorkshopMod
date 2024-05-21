class IAT_MusicPlus_CassettePlayer_ColorBase extends ItemBase
{
    protected EffectSound m_ActiveSound;

    protected bool m_IsPlaying;
    protected bool m_SyncIsPlaying;

    protected const int CASSETTE_VOL_MIN = 0;
    protected const int CASSETTE_VOL_MAX = 15;
    protected int m_CassetteVolume = 5;
    protected int m_CurrentCassetteIndex = 0;

    protected string m_CurrentCassetteSoundSet = "";

    void IAT_MusicPlus_CassettePlayer_ColorBase()
    {
        RegisterNetSyncVariableBool("m_SyncIsPlaying");
        RegisterNetSyncVariableInt("m_CassetteVolume", CASSETTE_VOL_MIN, CASSETTE_VOL_MAX);
    }

    //=================================== EVENTS
    override void SetActions()
	{
        super.SetActions();
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
		AddAction(ActionTurnOnWhileOnGround);
		AddAction(ActionTurnOffWhileOnGround);
		AddAction(ActionIncreaseVolume);
		AddAction(ActionDecreaseVolume);
	}
    override void EEItemAttached( EntityAI item, string slot_name )
	{
        super.EEItemAttached( item, slot_name );
        if( item && slot_name == string.Format("IAT_CassetteTape%1", m_CurrentCassetteIndex) )
        {
            m_CurrentCassetteSoundSet = item.GetCassetteSoundSetName();
        }
	}
	override void EEItemDetached( EntityAI item, string slot_name )
	{
        super.EEItemDetached( item, slot_name );
        if( item && slot_name == string.Format("IAT_CassetteTape%1", m_CurrentCassetteIndex) )
        {
            TurnOff();
            m_CassetteSoundSet = "";
        }
        else if ( slot_name == "BatteryD" )
        {
            TurnOff();
        }
    }
    override void OnMovedInsideCargo( EntityAI container )
	{
        TurnOff();
	}
    override void OnWorkStart()
    {
        // short circuit to play / stop in one line
        if (!Play())
        {
            TurnOff();
        }
    }
    override void OnWorkStop()
    {
        Stop();
    }
    override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
        // server says play and we are not already playing
        if( m_SyncIsPlaying && !m_IsPlaying )
            TurnOn();
        // server says stop and we are playing
        else if( !m_SyncIsPlaying && m_IsPlaying )
            TurnOff();
        // if client is playing and we syncd volume
        if (m_IsPlaying)
        {
            float currentVol = m_ActiveSound.GetSoundVolume();
            float expectedVol = m_CassetteVolume * 0.1;
            if (currentVol != expectedVol)
                m_ActiveSound.SetSoundVolume(expectedVol);
        }
	}
    //==================================== FUNCTIONS

    bool Play()
    {
        if (m_CurrentCassetteSoundSet == "")
            return false;

        if (!GetGame().IsDedicatedServer())
        {
            if ( m_ActiveSound )
                StopSoundSet( m_ActiveSound );

            PlaySoundSetLoop(m_ActiveSound, m_CurrentCassetteSoundSet, 0, 0);
        }
        m_IsPlaying = true;
        m_SyncIsPlaying = true;
        SetSynchDirty();
        return true;
    }
    void TurnOff()
    {
        GetCompEM().SwitchOff();
    }
    void TurnOn()
    {
        if ( GetCompEM().CanWork() )
        {
            GetCompEM().SwitchOn();
        }
    }
    void Stop()
    {
        m_IsPlaying = false;
        m_SyncIsPlaying = false;

        if ( m_ActiveSound )
        {
            StopSoundSet( m_ActiveSound );
        }
        SetSynchDirty();
    }
    bool IsVolumeInRange()
    {
        if (m_CassetteVolume < CASSETTE_VOL_MIN)
            return false;
        if (m_CassetteVolume > CASSETTE_VOL_MAX)
            return false;
        return true;
    }
    bool GetCassetteVolume()
    {
        return m_CassetteVolume;
    }
    void ModifyVolume(int deltaVolume)
    {
        m_CassetteVolume += deltaVolume;
        // clamp to max
        m_CassetteVolume = Math.Min(m_CassetteVolume, CASSETTE_VOL_MAX);
        // clamp to min
        m_CassetteVolume = Math.Max(m_CassetteVolume, CASSETTE_VOL_MIN);
        SetSynchDirty();
    }
};

class IAT_MusicPlus_CassettePlayer_1Track extends IAT_MusicPlus_CassettePlayer_ColorBase{};
class IAT_MusicPlus_CassettePlayer_8Track extends IAT_MusicPlus_CassettePlayer_ColorBase{};