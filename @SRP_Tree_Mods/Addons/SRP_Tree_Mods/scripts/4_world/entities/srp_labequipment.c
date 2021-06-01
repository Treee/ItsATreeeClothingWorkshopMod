class SRP_LabEquipment_Base extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);		
  }
}

class SRP_LabEquipment_Projector extends SRP_LabEquipment_Base {};
class SRP_LabEquipment_Tuner extends SRP_LabEquipment_Base {};
class SRP_LabEquipment_Oscilliscope extends SRP_LabEquipment_Base {};
class SRP_LabEquipment_GeigerCounter extends SRP_LabEquipment_Base {};
