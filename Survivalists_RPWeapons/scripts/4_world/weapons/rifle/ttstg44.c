class ttstg44 extends RifleBoltFree_Base
{
  override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
  // override bool CanEnterIronsights()
	// {
	// 	ItemOptics optic = GetAttachedOptics();
	// 	if (optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic) || KazuarOptic.Cast(optic))
	// 		return true;
	// 	return super.CanEnterIronsights();
	// }
  override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "STG_PBS5_Suppressor" );

    SpawnAttachedMagazine("Mag_AKM_Palm30Rnd");
	}	
};
