class ActionSRPRecolorClothingOption extends ActionSRPVariantIdOption
{	
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("on action info update");
    m_Text = "No Option";

    ItemBase target_clothing;
		if ( target && Class.CastTo(target_clothing, target.GetObject()) )
    {
      // array<string> variantOptions = GetVariantIdOptions(target_clothing.GetType());
      if (target_clothing.HasDyableOptions())
      {
        string displayOption = target_clothing.GetDyeOption(m_VariantID);
        if (displayOption != "" )
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
    ItemBase target_clothing;
		if ( target && Class.CastTo(target_clothing, target.GetObject()) )
		{
      if (target_clothing.GetNumberOfItems() > 0)
      {
        return false;
      }
      if (target_clothing.HasDyableOptions())
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
      ItemBase target_clothing;
      if ( action_data.m_Target && Class.CastTo(target_clothing, action_data.m_Target.GetObject()) )
      {
        int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;

        // string inheritedClass = GetInheritingClass(target_clothing.GetType());
        // Print("finish progress server: variantId: " + variantId + " items inheriting class: " + inheritedClass + " item Name: "+ target_clothing.GetType());

        string newItemName = target_clothing.GetDyableBaseClassName();

        if (target_clothing.HasDyableOptions())
        {
          newItemName = newItemName + "_" + target_clothing.GetDyeOption(variantId);
        }
        // Print("newItemName: " + newItemName);
        ReplaceItemWithNewLambdaBase lambda = new ReplaceItemWithNewLambdaBase(target_clothing, newItemName);
        MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);        
        // dye.AddQuantity(-Math.RandomIntInclusive(50,100));
        dye.ReduceQuantityBySlotType(target_clothing.GetWearableSlotType());
      }
		}
	}

  override void OnUpdateActions( Object item, Object target, int component_index )
	{
    // Print("on update actions start");
    ItemBase clothingItem;
		if (Class.CastTo(clothingItem, target))
		{
      // Print("on update actions clothing cast: " + clothingItem);
      GetVariantManager().SetActionVariantCount(clothingItem.GetTotalColorVariations());
		}
		else
		{
      // Print("clear items");
			GetVariantManager().Clear();
		}
	}
};
