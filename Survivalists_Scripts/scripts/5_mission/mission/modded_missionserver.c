modded class MissionServer
{
  void MissionServer()
  {
    SRPConfig config = SRPGlobals.Get();
    GetDayZGame().SetSRPConfigGlobal(config);
  }
  override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
  {
    super.InvokeOnConnect(player, identity);
    auto configParams = new Param1<SRPConfig>(GetDayZGame().GetSRPConfigGlobal());
    Print("Sending Survivalists Mod Config to Player: " + identity.GetName() + " RPC: " + SRP_RPC.CHECK_SRP_CONFIG);
    GetGame().RPCSingleParam(player, SRP_RPC.CHECK_SRP_CONFIG, configParams, true, identity );
  }
  override PlayerBase OnClientNewEvent(PlayerIdentity identity, vector pos, ParamsReadContext ctx)
	{
		string characterType;
		// get login data for new character
		if ( ProcessLoginData(ctx) && (m_RespawnMode == GameConstants.RESPAWN_MODE_CUSTOM) && !GetGame().GetMenuDefaultCharacterData(false).IsRandomCharacterForced() )
		{
			if (GetGame().ListAvailableCharacters().Find(GetGame().GetMenuDefaultCharacterData().GetCharacterType()) > -1)
      {
        if (IsMutantCharacterType(GetGame().GetMenuDefaultCharacterData().m_CharacterType))
          characterType = GetGame().GetMenuDefaultCharacterData().m_CharacterType;
        else        
				  characterType = GetGame().GetMenuDefaultCharacterData().GetCharacterType();
      }
			else //random type
				characterType = GetGame().CreateRandomPlayer();
		}
		else
		{
			characterType = GetGame().CreateRandomPlayer();
			GetGame().GetMenuDefaultCharacterData().GenerateRandomEquip();
		}
    

		if (CreateCharacter(identity, pos, ctx, characterType))
		{
			EquipCharacter(GetGame().GetMenuDefaultCharacterData());
		}
		
		return m_player;
	}
  bool IsMutantCharacterType(string characterType)
  {
    return (characterType.Substring(0, 4) == "DUB_");
  }
};