modded class DayZGame
{
    protected ref SRPConfig m_SRPConfig;
    protected ref SRP_SmithingRecipes m_SmithingRecipes;
    protected ref SRP_TailoringRecipes m_TailoringRecipes;
    protected ref SRP_DrugRecipes m_DrugRecipes;
    protected ref SRP_WoodWorkbenchRecipes m_WoodWorkingRecipes;
    protected ref SRP_MetalWorkbenchRecipes m_MetalWorkingRecipes;
    protected ref SRP_AmmoRecipes m_AmmoRecipes;
    protected ref SRP_CookingRecipes m_CookingRecipes;
    protected ref SRP_DynamicTreasureHunt m_DynamicDreasureHunt;
    protected ref SRP_AdminHelper m_AdminHelper;
    protected ref SRP_MeatFarmingBlockConfig m_MeatFarmingConfig;
    private ref SRPProfileOptions m_SRPProfileOptions;

    private bool m_IsLeftShiftHolding;

    void DayZGame()
    {
        RemoveMutantSurvivorClassTypes();
        m_SmithingRecipes = new SRP_SmithingRecipes();
        m_TailoringRecipes = new SRP_TailoringRecipes();
        m_DrugRecipes = new SRP_DrugRecipes();
        m_WoodWorkingRecipes = new SRP_WoodWorkbenchRecipes();
        m_MetalWorkingRecipes = new SRP_MetalWorkbenchRecipes();
        m_AmmoRecipes = new SRP_AmmoRecipes();
        m_CookingRecipes = new SRP_CookingRecipes();
        m_DynamicDreasureHunt = new SRP_DynamicTreasureHunt();
        m_MeatFarmingConfig = new SRP_MeatFarmingBlockConfig();
        m_AdminHelper = new SRP_AdminHelper();
        m_SRPProfileOptions = new SRPProfileOptions();
    }

    void ~DayZGame()
    {
        delete m_SRPConfig;
    }

    override void DeferredInit()
    {
        super.DeferredInit();
        //Register custom option
        m_SRPProfileOptions.RegisterProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR, "UI Stats Colors");
    }
    float GetSRPProfileVal(SRP_EDayZProfilesOptions option)
    {
        return m_SRPProfileOptions.GetProfileOptionVal(option);
    }
    void SetSRPProfileVal(SRP_EDayZProfilesOptions option, float value)
    {
        m_SRPProfileOptions.SetProfileOptionVal(option, value);
    }


    void SetSRPConfigGlobal(SRPConfig config)
    {
        Print("Survivalists_Scripts Settings Confirmed");
        m_SRPConfig = config;
    }
    SRPConfig GetSRPConfigGlobal()
    {
        return m_SRPConfig;
    }
    SRP_SmithingRecipes GetSRPSmithingRecipesGlobal()
    {
        return m_SmithingRecipes;
    }
    SRP_TailoringRecipes GetSRPTailoringRecipesGlobal()
    {
        return m_TailoringRecipes;
    }
    SRP_DrugRecipes GetSRPDrugRecipesGlobal()
    {
        return m_DrugRecipes;
    }
    SRP_WoodWorkbenchRecipes GetSRPWoodWorkbenchRecipesGlobal()
    {
        return m_WoodWorkingRecipes;
    }
    SRP_MetalWorkbenchRecipes GetSRPMetalWorkbenchRecipesGlobal()
    {
        return m_MetalWorkingRecipes;
    }
    SRP_AmmoRecipes GetSRPAmmoRecipesGlobal()
    {
        return m_AmmoRecipes;
    }
    SRP_CookingRecipes GetSRPCookingRecipesGlobal()
    {
        return m_CookingRecipes;
    }
    SRP_DynamicTreasureHunt GetDynamicTreasureHunt()
    {
        return m_DynamicDreasureHunt;
    }
    SRP_AdminHelper GetAdminHelper()
    {
        return m_AdminHelper;
    }
    SRP_MeatFarmingBlockConfig GetSRPMeatFarmingConfigGlobal()
    {
        return m_MeatFarmingConfig;
    }

    void RemoveMutantSurvivorClassTypes()
    {
        string path = "cfgVehicles";
        string child_name = "";
        int count = ConfigGetChildrenCount( path );
        m_CharClassNames.Clear();

        for (int p = 0; p < count; ++p)
        {
            ConfigGetChildName( path, p, child_name );

            if (ConfigGetInt(path + " " + child_name + " scope") == 2 && IsKindOf(child_name, "SurvivorBase"))
            {
                if (!child_name.Contains("DUB_"))
                {
                    m_CharClassNames.Insert(child_name);
                }
            }
        }
    }

    bool IsLeftShiftDown()
    {
        return m_IsLeftShiftHolding;
    }
    override void OnKeyPress(int key)
    {
        if (key == KeyCode.KC_LSHIFT)
        {
            m_IsLeftShiftHolding = true;
        }
        super.OnKeyPress(key);
    }
    override void OnKeyRelease(int key)
    {
        if (key == KeyCode.KC_LSHIFT)
        {
            m_IsLeftShiftHolding = false;
        }
        super.OnKeyRelease(key);
    }
    override void FirearmEffects(Object source, Object directHit, int componentIndex, string surface, vector pos, vector surfNormal,vector exitPos, vector inSpeed, vector outSpeed, bool isWater, bool deflected, string ammoType)
	{
		super.FirearmEffects(source,directHit,componentIndex,surface,pos,surfNormal,exitPos,inSpeed,outSpeed,isWater,deflected,ammoType);
        if (IsServer())
		{
            if (source && source.ShootsExplosiveAmmo() && !deflected && outSpeed == vector.Zero)
            {
                vector adjust = surfNormal.VectorToAngles();
                if(ammoType == "Bullet_40mm_Flash")
                {
                    if(GetGame().IsDedicatedServer())
                    {
                        GetGame().CreateObject("DUB_Flash", pos);
                    }
                }
            }
        }
    }
};