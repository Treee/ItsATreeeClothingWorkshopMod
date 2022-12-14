class SRP_TurnItemIntoItemLambda_BuildingKitDeployment extends TurnItemIntoItemLambda
{
	vector m_DeployPosition;
  vector m_DeployOrientation;

	void SRP_TurnItemIntoItemLambda_BuildingKitDeployment (EntityAI old_item, string new_item_type, PlayerBase player, vector deployPosition="0 0 0", vector deployOrientation="0 0 0") 
  {
    m_DeployPosition = deployPosition;
    m_DeployOrientation = deployOrientation;
  }

	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);

		if (new_item) 
		{							
      new_item.SetPosition(m_DeployPosition);
      new_item.SetOrientation(m_DeployOrientation);
		}
		else
		{
			Debug.LogError("SRP_TurnItemIntoItemLambda_BuildingKitDeployment: failed to create new item and place it","static");
		}
	}
};