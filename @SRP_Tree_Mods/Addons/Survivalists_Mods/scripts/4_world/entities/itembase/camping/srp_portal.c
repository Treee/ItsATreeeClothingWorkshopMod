class SRP_PortalBase extends Inventory_Base
{
  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }

  void TeleportPlayer(PlayerBase player)
  {    
    vector player_pos = player.GetPosition();
    vector closest_safe_pos = GetTemplateIslandSpawnPoints().GetRandomElement();

    closest_safe_pos[1] = GetGame().SurfaceY(closest_safe_pos[0], closest_safe_pos[2]);
    player.SetPosition( closest_safe_pos );//...so lets teleport them somewhere safe
    GetGame().RPCSingleParam(player, ERPCs.RPC_WARNING_TELEPORT, null, true, player.GetIdentity());   
  }

  array<vector> GetTemplateIslandSpawnPoints()
  {
    return {
      "200.076 17.5203 373.244", "200.91 17.635 376.625", "203.894 17.5517 375.947", "202.913 17.4622 372.84",
      "252.281 4.30492 294.168", "254.848 4.28106 296.109", "256.666 4.20943 293.871", "254.403 4.22075 292.073",
      "190.275 17.811 540.368", "188.421 17.8533 542.666", "190.754 18.1094 544.874", "192.119 18.0294 541.975",
      "162.237 28.9325 590.383", "164.603 28.9325 592.812", "166.452 28.9325 590.449", "164.535 28.9325 588.607",
      "243.111 15.936 739.746", "244.601 15.8899 736.634", "242.338 15.8022 735.013", "241.035 15.8924 737.743",
      "207.232 15.9464 812.859", "206.816 15.9706 808.727", "204.222 15.9447 809.584", "204.492 15.9409 812.593",
      "398.069 17.1929 942.151", "395.038 17.2981 941.83", "395.02 17.1275 945.074" , "397.974 17.0343 945.102",
      "586.012 32.1653 956.103", "587.302 32.4145 953.148", "584.793 31.9727 951.742" , "583.586 31.8147 954.203",
      "617.152 24.6125 832.506", "617.265 24.6157 829.633", "614.54 24.6125 829.166" , "614.237 24.6125 832.308",
      "611.369 16.0642 707.34", "608.559 15.9447 705.684", "607.012 15.958 708.085" , "609.77 16.1245 710.042",
      "451.162 16.3919 678.352", "454.521 16.1459 678.228", "454.678 16.4238 675.511" , "451.426 16.6131 675.413"
    };
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(SRP_TeleportAction);		
	}
};

class SRP_PortalBone extends SRP_PortalBase{};
class SRP_PortalDruid extends SRP_PortalBase{};
class SRP_PortalArch extends SRP_PortalBase{};