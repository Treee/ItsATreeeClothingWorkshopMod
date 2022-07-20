class SRP_Icepack extends Heatpack
{
	override void OnWorkStart()
	{
		if (GetGame().IsServer())
		{
			SetTemperature(-200);
		}
	}
	
	override void OnWork( float consumed_energy )
	{
		if (GetGame().IsServer())
		{
			SetTemperature(-200);
		}
	}
};
