enum SRP_EDayZProfilesOptions
{
	SHOW_UISTAT_COLOR
}

typedef Param3<string, float, float> SRPProfileOptionDta;

class SRPProfileOptions
{
	private ref map<SRP_EDayZProfilesOptions, ref SRPProfileOptionDta> m_CustomOptions;

	void RegisterProfileOption(SRP_EDayZProfilesOptions option, string profileOptionName, float def = 0.0)
	{
		if ( !m_CustomOptions )
		{
			m_CustomOptions = new map<SRP_EDayZProfilesOptions, ref SRPProfileOptionDta>;
		}
		
		if ( !m_CustomOptions.Contains(option) )
		{
			string value;
 			GetGame().GetProfileString(profileOptionName, value);
 			if (value == string.Empty || value == "0")
 			{
 				m_CustomOptions.Set(option, new SRPProfileOptionDta(profileOptionName, def, def));
				SetProfileOptionVal(option, def);
 			}
 			else
 			{
 				m_CustomOptions.Set(option, new SRPProfileOptionDta(profileOptionName, value.ToFloat(), def));
				SetProfileOptionVal(option, value.ToFloat());
 			}
		}
	}
	
	void ResetOptions()
	{
		if ( !m_CustomOptions )
		{
			m_CustomOptions = new map<SRP_EDayZProfilesOptions, ref SRPProfileOptionDta>;
		}

		foreach (SRP_EDayZProfilesOptions e_opt, SRPProfileOptionDta r_opt : m_CustomOptions)
		{
			string value;
 			if (GetGame().GetProfileString(r_opt.param1, value))
    		{
    			SetProfileOptionVal(e_opt, value.ToFloat());
    		}else{
    			SetProfileOptionVal(e_opt, r_opt.param3);
    		}
		}	
	}
	
	void SetProfileOptionVal(SRP_EDayZProfilesOptions option, float value)
	{
		if ( m_CustomOptions && m_CustomOptions.Contains(option) )
		{
			SRPProfileOptionDta po = m_CustomOptions.Get(option);
			
			po.param2 = value;
			GetGame().SetProfileString(po.param1, value.ToString());
			GetGame().SaveProfile();
		}	
	}

	float GetProfileOptionVal(SRP_EDayZProfilesOptions option)
	{
		if ( m_CustomOptions && m_CustomOptions.Contains(option) )
		{
			SRPProfileOptionDta po = m_CustomOptions.Get(option);
			return po.param2;
		}
		return 0.0;
	}

	map<SRP_EDayZProfilesOptions, ref SRPProfileOptionDta> GetCustomProfileOptionMap()
	{
		return m_CustomOptions;
	}
};