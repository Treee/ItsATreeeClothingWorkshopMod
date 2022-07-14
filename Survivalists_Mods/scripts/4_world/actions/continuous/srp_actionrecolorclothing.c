class ActionSRPRecolorClothingOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    Clothing target_clothing;
		if ( target && Class.CastTo(target_clothing, target.GetObject()) )
    {
      array<string> variantOptions = GetVariantIdOptions(target_clothing.GetType());
      if (variantOptions.Count() > 0)
      {
        string displayOption = variantOptions.Get(m_VariantID);
        if (displayOption && displayOption != "" )
        {
          m_Text = "Recolor - " + displayOption;
          // Print("on action info update: terxt: " + m_Text);
        }
      }
    }
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("Action condition start");
    SRP_CraftingMaterial_Dye_Base dye;
		if (Class.CastTo(dye, item) && item.GetQuantity() < 75)
		{
      return false;
    }
    // Print("Action condition- item in hands is spray can: " + dye);
    Clothing target_clothing;
		if ( target && Class.CastTo(target_clothing, target.GetObject()) )
		{
      if (target_clothing.GetNumberOfItems() > 0)
      {
        return false;
      }
      if (GetVariantIdOptions(target_clothing.GetType()).Count() > 0)
      {
        // Print("Action condition- target is clothing: " + target_clothing);
			  return true;	
      }
		}
    return false;

	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_CraftingMaterial_Dye_Base dye;
		if (action_data.m_MainItem && Class.CastTo(dye, action_data.m_MainItem))
		{
      Clothing target_clothing;
      if ( action_data.m_Target && Class.CastTo(target_clothing, action_data.m_Target.GetObject()) )
      {
        int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;

        // string inheritedClass = GetInheritingClass(target_clothing.GetType());
        // Print("finish progress server: variantId: " + variantId + " items inheriting class: " + inheritedClass + " item Name: "+ target_clothing.GetType());

        string newItemName = GetRootClassName(target_clothing.GetType());

        // Print("rootclassname: " + newItemName);
        array<string> variantOptions = GetVariantIdOptions(target_clothing.GetType());
        if (variantOptions.Count() > 0)
        {
          newItemName = newItemName + "_" + variantOptions.Get(variantId);
        }

        ReplaceItemWithNewLambdaBase lambda = new ReplaceItemWithNewLambdaBase(target_clothing, newItemName);
        MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);        
        dye.AddQuantity(-Math.RandomIntInclusive(50,100));
      }
		}
	}

  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    Clothing clothingItem;
		if (Class.CastTo(clothingItem, target))
		{
      // Print("on update actions clothing cast: " + clothingItem);
      GetVariantManager().SetActionVariantCount(GetVariantIdOptions(clothingItem.GetType()).Count());
		}
		else
		{
      // Print("clear items");
			GetVariantManager().Clear();
		}
	}

  override TStringArray GetVariantIdOptions(string itemType)
  {
    Print("itemtype: " + itemType + " item to find variants: "+ string.Format("CfgVehicles %1 colorVariants", itemType));
    array<string> variantOptions = new array<string>;    
		GetGame().ConfigGetTextArray( string.Format("CfgVehicles %1 colorVariants", itemType), variantOptions );

    if (variantOptions.Count() == 0)
    {
      string inheritingClass = GetInheritingClass(itemType);      
		  GetGame().ConfigGetTextArray( string.Format("CfgVehicles %1 colorVariants", inheritingClass), variantOptions );
    }
    // Print("Variant Options: " + variantOptions.Count());
    return variantOptions;
  }

  string GetRootClassName(string itemType)
  {
    string rootClassName;
    GetGame().ConfigGetText(string.Format("CfgVehicles %1 rootClassName", itemType), rootClassName);
    if (rootClassName == "")
    {
      string inheritingClass = GetInheritingClass(itemType);
      GetGame().ConfigGetText(string.Format("CfgVehicles %1 rootClassName", inheritingClass), rootClassName);
    }
    // Print("trying to get root class for " + string.Format("CfgVehicles %1 rootClassName", itemType) + " returned " + rootClassName);
    return rootClassName;
  }

  string GetInheritingClass(string cfg_class_name)
	{
		TStringArray full_path = new TStringArray;
		
		GetGame().ConfigGetFullPath("CfgVehicles " + cfg_class_name, full_path);
		
    if (full_path.Count() > 0)
    { // full path = itemName: inheriting: inheriting, inherited class ex SRP_HuntingBag_MTP HuntingBag Clothing
      
      // foreach (string path : full_path)
      // {
      //   Print("Path Item: " + path);
      // }
      return full_path.Get(1);
    }
    return "";
	}

};
