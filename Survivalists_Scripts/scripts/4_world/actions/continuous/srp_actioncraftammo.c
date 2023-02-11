class SRP_ActionCraftAmmo extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    string displayOption = GetVariantIdOptions().Get(m_VariantID);
    if (displayOption && displayOption != "" )
    {
      m_Text = "Craft Ammo - " + displayOption;
      // Print("on action info update: terxt: " + m_Text);
    }
	}
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_AdvancedWorkbench target_bench;
		if ( target && Class.CastTo(target_bench, target.GetObject()) )
		{
      // int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      string ammoType = GetVariantIdOptions().Get(m_VariantID);
      return target_bench.HasAllAttachments() && target_bench.HasCorrectAmmoComponents(ammoType);
    }    
		return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_AdvancedWorkbench target_bench;
		if ( action_data.m_Target && Class.CastTo(target_bench, action_data.m_Target.GetObject()) )
		{
      int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
      string ammoType = GetVariantIdOptions().Get(variantId);
      if (target_bench.HasCorrectAmmoComponents(ammoType))
      {
        Magazine ammo = Magazine.Cast( GetGame().CreateObjectEx(string.Format("Ammo_%1", ammoType), action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
        if (ammo)
        {
          ammo.ServerSetAmmoCount(target_bench.GetBulletYieldValue(ammoType));
          target_bench.DecreaseHealth(1);		
          target_bench.RemoveAmmoCraftingComponents(ammoType);
        }
      }
    }
	}

  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    Pliers pliers;
    if ( Class.CastTo(pliers, item) )
    {
      // Print("on update actions clothing cast: " + clothingItem);
      GetVariantManager().SetActionVariantCount(GetVariantIdOptions().Count());
		}
		else
		{
      // Print("clear items");
			GetVariantManager().Clear();
		}
	}
  override TStringArray GetVariantIdOptions(string itemType="")
  {
      // "12gaRubberSlug",
      // "12gaBeanbag",
      // "ArrowComposite",
      // "SharpStick",
      // "ArrowPrimitive",
      // "ArrowBoned",
      // "ArrowBolt",
      // "DartSyringe",
      // "RPG7_HE",
      // "RPG7_AP",
      // "LAW_HE",
      // "GrenadeM4",
      // "40mm_Explosive",
      // "40mm_ChemGas",
      // already craftable via other means
      // "Flare",
      // "FlareRed",
      // "FlareGreen",
      // "FlareBlue",
    return {
      "45ACP",
      "308Win",      
      "9x19",
      "380",
      "556x45",
      "762x54",
      "762x39",
      "9x39AP",
      "9x39",
      "22",
      "12gaPellets",
      "12gaSlug",
      "357",
      "545x39",
      "700Nitro",
      "40mm_Smoke_Red",
      "40mm_Smoke_Green",
      "40mm_Smoke_White",
      "40mm_Smoke_Black",
      "40mm_Explosive"
    };
  }
};
