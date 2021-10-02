modded class PluginLifespan
{
  const string FACEPAINT_PATH = "Survivalists_Mods\\characters\\heads\\";

  override protected void SetPlayerLifespanLevel( PlayerBase player, LifespanLevel level )
	{
		int slot_id = InventorySlots.GetSlotIdFromString("Head");	
		EntityAI players_head = player.GetInventory().FindPlaceholderForSlot( slot_id );
    
		
		if( players_head )
		{
			switch(level.GetLevel())
			{
				case LifeSpanState.BEARD_NONE:
				{
					players_head.SetObjectTexture( 0, "");
					players_head.SetObjectMaterial( 0, "");

          // Print("No beard: " + player.m_facepaintState);

          if (player.m_facepaintState > 0)
          {
            player.SetFaceTexture( level.GetTextureName() );
            player.SetFaceMaterial( GetModifiedFaceMaterial(player, level) );
          }
          else 
          {
            player.SetFaceTexture( level.GetTextureName() );
            player.SetFaceMaterial( level.GetMaterialName() );
          }
					
					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_NONE);
					//Print("LifeSpanState.BEARD_NONE");
					break;
				}
				case LifeSpanState.BEARD_MEDIUM:
				{
					players_head.SetObjectTexture( 0, "");
					players_head.SetObjectMaterial( 0, "");	

          // Print("Medium beard: " + player.m_facepaintState);

					if (player.m_facepaintState > 0)
          {
            player.SetFaceTexture( level.GetTextureName() );
            player.SetFaceMaterial( GetModifiedFaceMaterial(player, level) );
          }
          else 
          {
            player.SetFaceTexture( level.GetTextureName() );
            player.SetFaceMaterial( level.GetMaterialName() );
          }
										
					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_MEDIUM);
					//Print("LifeSpanState.BEARD_MEDIUM");
					break;
				}
				
				case LifeSpanState.BEARD_LARGE:
				{	
					players_head.SetObjectTexture( 0, "");
					players_head.SetObjectMaterial( 0, "");	
					
          // Print("Large beard: " + player.m_facepaintState);

					if (player.m_facepaintState > 0)
          {
            player.SetFaceTexture( level.GetTextureName() );
            player.SetFaceMaterial( GetModifiedFaceMaterial(player, level) );
          }
          else 
          {
            player.SetFaceTexture( level.GetTextureName() );
            player.SetFaceMaterial( level.GetMaterialName() );
          }
			
					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_LARGE);
					// Print("LifeSpanState.BEARD_LARGE");
					break;
				}
				
				case LifeSpanState.BEARD_EXTRA:
				{
					players_head.SetObjectTexture( 0, level.GetTextureName() );
					players_head.SetObjectMaterial( 0, level.GetMaterialName() );
          // Print("extra beard: " + player.m_facepaintState);
					array< ref LifespanLevel> lifespan_levels = m_LifespanLevels.Get( player.GetPlayerClass() );
					LifespanLevel prev_level = lifespan_levels.Get(LifeSpanState.BEARD_LARGE);


          if (player.m_facepaintState > 0)
          {
            player.SetFaceTexture( prev_level.GetTextureName() );
            player.SetFaceMaterial( GetModifiedFaceMaterial(player, prev_level) );
          }
          else 
          {
            player.SetFaceTexture( prev_level.GetTextureName() );
					  player.SetFaceMaterial( prev_level.GetMaterialName() );
          }					
					
					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_EXTRA);
					//Print("LifeSpanState.BEARD_EXTRA");
					break;
				}
									
				default:
				{
					Print("Lifespan state missing");
					break;
				}
			}	
		}
	}

  string GetModifiedFaceMaterial(PlayerBase player, LifespanLevel level)
  {
    string modifiedMaterial = level.GetMaterialName();
    TStringArray parts = new TStringArray;
    modifiedMaterial.Split("\\", parts);
    // Print("these are parts " + parts[5]);
    modifiedMaterial = FACEPAINT_PATH + player.GetSelectedCamoName() + "\\" + parts[5];
    // Print("facepaint path: " + modifiedMaterial);
    return modifiedMaterial;
  }
}
