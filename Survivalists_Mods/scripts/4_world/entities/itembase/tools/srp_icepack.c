class SRP_Icepack extends Heatpack
{
	override void OnWorkStart()
	{
		if (GetGame().IsServer())
		{
			SetTemperature(10);
		}
	}
	
	override void OnWork( float consumed_energy )
	{
		if (GetGame().IsServer())
		{
			SetTemperature(10);
		}
	}
};
