class IAT_MusicPlus_CassetteTape_Base extends ItemBase
{
    protected string m_CassetteSoundSetName;

    string GetCassetteSoundSetName()
    {
        if (m_CassetteSoundSetName == "")
        {
            string cfgPath = string.Format("CfgVehicles %1 CfgCassette soundSet", GetType());
            if (GetGame().ConfigIsExisting(cfgPath))
            {
                m_CassetteSoundSetName = GetGame().ConfigGetTextOut(cfgPath);
            }
        }
        return m_CassetteSoundSetName;
    }
};

class IAT_MusicPlus_CassetteTape_Kuru1 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru2 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru3 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru4 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru5 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru6 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru7 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru8 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru9 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru10 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru11 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru12 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru13 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru14 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru15 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru16 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru17 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru18 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru19 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru20 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru21 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru22 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru23 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru24 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru25 extends IAT_MusicPlus_CassetteTape_Base{};
class IAT_MusicPlus_CassetteTape_Kuru26 extends IAT_MusicPlus_CassetteTape_Base{};