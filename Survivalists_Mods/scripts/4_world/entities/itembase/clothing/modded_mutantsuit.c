modded class DUB_Monsterv2
{
  override float GetProtectionLevel(int type, bool consider_filter = false, int system = 0)
	{
		if (IsDamageDestroyed() || (HasQuantity() && GetQuantity() <= 0) )
		{
			return 0;
		}

		string subclass_path, entryName;

		switch (type)
		{
			case DEF_BIOLOGICAL:
				entryName = "biological";
				break;
			case DEF_CHEMICAL:
				entryName = "chemical";
				break;	
			default:
				entryName = "biological";
				break;
		}
		
		subclass_path = "CfgVehicles " + this.GetType() + " Protection ";
		
		return GetGame().ConfigGetFloat(subclass_path + entryName);
	}
};