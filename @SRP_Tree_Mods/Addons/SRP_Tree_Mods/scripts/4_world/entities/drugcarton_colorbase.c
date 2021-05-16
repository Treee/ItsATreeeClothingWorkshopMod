class SRP_DrugCarton_ColorBase extends ItemBase {
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    // Debug.Log("SRP_DrugCarton_ColorBase taking " + item);    
		if (item && item.GetType() == "SRP_DrugPack_ZWeed" || item.GetType() == "SRP_DrugPack_Cigarette")
		{
      return true;
    }
		return false;
	}
};
class SRP_DrugCarton_ZWeed extends SRP_DrugCarton_ColorBase {};
class SRP_DrugCarton_Cigarette extends SRP_DrugCarton_ColorBase {};
class SRP_DrugCarton_Cigar extends SRP_DrugCarton_ColorBase {
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
    // Debug.Log("SRP_DrugCarton_Cigar taking " + item);
		if (item && item.GetType() == "SRP_Smokable_Cigar" || item.GetType() == "SRP_Smokable_Clear" || item.GetType() == "SRP_Smokable_Test")
		{
      return true;
    }
		return false;
	}
};
