class TurnItemIntoItemLambda_KitDeployment extends TurnItemIntoItemLambda
{
	vector m_DeployPosition;
  vector m_DeployOrientation;

	void TurnItemIntoItemLambda_KitDeployment (EntityAI old_item, string new_item_type, PlayerBase player, vector deployPosition="0 0 0", vector deployOrientation="0 0 0") 
  {
    m_DeployPosition = deployPosition;
    m_DeployOrientation = deployOrientation;
  }
	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{    
    if (new_item.IsBuilding())
      m_TransferHealth = false;

		super.CopyOldPropertiesToNew(old_item, new_item);

		if (new_item) 
		{							
      new_item.SetPosition(m_DeployPosition);
      new_item.SetOrientation(m_DeployOrientation);      
		}
		else
		{
			Debug.LogError("TurnItemIntoItemLambda_KitDeployment: failed to create new item and place it","static");
		}
	}
};
class TurnItemIntoItemLambda_KitDeployment_DamageKit extends TurnItemIntoItemLambda
{
	vector m_DeployPosition;
  vector m_DeployOrientation;

	void TurnItemIntoItemLambda_KitDeployment_DamageKit (EntityAI old_item, string new_item_type, PlayerBase player, vector deployPosition="0 0 0", vector deployOrientation="0 0 0") 
  {
    m_DeployPosition = deployPosition;
    m_DeployOrientation = deployOrientation;
  }

	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{    
    float deploymentCost = old_item.GetMaxHealth() * 0.05;
    // float deploymentCost = old_item.GetMaxHealth(); // debug
    old_item.AddHealth(-deploymentCost);
    
    if (new_item.IsBuilding())
      m_TransferHealth = false;

		super.CopyOldPropertiesToNew(old_item, new_item);

		if (new_item) 
		{							
      new_item.SetPosition(m_DeployPosition);
      new_item.SetOrientation(m_DeployOrientation);
		}
		else
		{
			Debug.LogError("TurnItemIntoItemLambda_KitDeployment_DamageKit: failed to create new item and place it","static");
		}
	}
};
class ReplaceItemWithNewLambda_SawWoodenLogs extends ReplaceItemWithNewLambdaBase
{
	int m_ItemCount;
	
	void ReplaceItemWithNewLambda_SawWoodenLogs(EntityAI old_item, string new_item_type, PlayerBase player, int count) 
	{
		m_ItemCount = count; 
	}

	override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);

		ItemBase planks;
		Class.CastTo(planks, new_item);
		
		ItemBase woodenlog;
		Class.CastTo(woodenlog, old_item);
		
		MiscGameplayFunctions.TransferItemProperties(woodenlog, planks);
		
		planks.SetQuantity(m_ItemCount);
	}
};
class ReplaceItemWithNewLambda_Dye extends ReplaceItemWithNewLambdaBase
{
	override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);

		new_item.SetHealth(old_item.GetHealth());
	}
};