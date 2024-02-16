class IAT_DestroyableObject_Base extends BuildingSuper
{
  override void EEKilled(Object killer)
  {
    super.EEKilled(killer);
    GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( DeleteSafe, 100, false);
  }
  override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		return true;
	}
  override bool IsHealthVisible()
	{
		return true;
	}	
};

class IAT_DeleteObjectOnRuined_test_wall_board extends IAT_DestroyableObject_Base{};
class IAT_DeleteObjectOnRuined_test_wall_board_02 extends IAT_DestroyableObject_Base{};
class IAT_DeleteObjectOnRuined_test_wall_board_03 extends IAT_DestroyableObject_Base{};