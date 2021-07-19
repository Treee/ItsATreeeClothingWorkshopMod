class SRP_KitBase extends ItemBase 
{
  ref protected EffectSound 		m_DeployLoopSound;
	protected bool 					m_DeployedRegularly;

  void SRP_KitBase()
	{
		m_DeployLoopSound = new EffectSound;
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsDeploySound");
	}
  
  void ~SRP_KitBase()
	{
		if ( m_DeployLoopSound )
		{
			SEffectManager.DestroySound( m_DeployLoopSound );
		}
	}

  string GetKitItemName()
  {
    string kitType = this.GetType();
    if (kitType != "") {
      // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
      kitType = kitType.Substring(0, kitType.Length() - 4);
    }
    return kitType;
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( IsDeploySound() )
		{
			PlayDeploySound();
		}
				
		if ( CanPlayDeployLoopSound() )
		{
			PlayDeployLoopSound();
		}
					
		if ( m_DeployLoopSound && !CanPlayDeployLoopSound() )
		{
			StopDeployLoopSound();
		}
		
		if ( m_DeployedRegularly && IsSoundSynchRemote() )
		{
			PlayDeployFinishSound();
		}
	}

  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(GetKitItemName(), position, ECE_PLACE_ON_SURFACE));
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);

      this.Delete();
		}

		SetIsPlaceSound(true);
	}

  override void OnEndPlacement()
	{
		m_DeployedRegularly = true;
		SoundSynchRemote();
	}

  override void OnPlacementCancelled( Man player )
	{
		super.OnPlacementCancelled(player);
		m_DeployedRegularly = false;
	}

	override bool IsDeployable() 
  {
      return true;
  }

  override bool CanAssignAttachmentsToQuickbar()
	{
		return false;
	}

  override string GetDeploySoundset()
	{
		return "putDown_FenceKit_SoundSet";
	}
	
	override string GetLoopDeploySoundset()
	{
		return "BarbedWire_Deploy_loop_SoundSet";
	}

  override string GetDeployFinishSoundset()
	{
		return "";
	}

  void PlayDeployLoopSound()
	{		
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{		
			if ( !m_DeployLoopSound.IsSoundPlaying() )
			{
				m_DeployLoopSound = SEffectManager.PlaySound( GetLoopDeploySoundset(), GetPosition() );
			}
		}
	}
	
	void StopDeployLoopSound()
	{
		if ( GetGame().IsMultiplayer() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{	
			m_DeployLoopSound.SetSoundFadeOut(0.5);
			m_DeployLoopSound.SoundStop();
		}
	}


  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
}
// If you add a new kit, add it to this list so it gets the right stuff
//craftable kits
class SRP_BedsideTable_Kit extends SRP_KitBase {}
class SRP_BedsideTableMetal_Kit extends SRP_KitBase {}
class SRP_WoodenShelf_Kit extends SRP_KitBase {}
class SRP_GunShelf_Kit extends SRP_KitBase {}
class SRP_Potbelly_Stove_Kit extends SRP_KitBase {}
class SRP_ShootingTargetO_Kit extends SRP_KitBase {}
class SRP_StreetLightLarge_Kit extends SRP_KitBase {}
class SRP_StreetLightLarge_Metal_Kit extends SRP_KitBase {}
class SRP_StreetLightMedium_Wood_Kit extends SRP_KitBase {}
class SRP_StreetLightMedium_Kit extends SRP_KitBase {}
class SRP_Furniture_WoodenTable_Kit extends SRP_KitBase {}

// non craftable kits
class SRP_FridgeBig_Kit extends SRP_KitBase {}
class SRP_PostBox_Kit extends SRP_KitBase {}
class SRP_PostBoxBig_Kit extends SRP_KitBase {}
class SRP_MilitaryCase_Kit extends SRP_KitBase {}
class SRP_GChair_Kit extends SRP_KitBase {}
class SRP_GChairHigh_Kit extends SRP_KitBase {}
class SRP_GOutdoorTable_Kit extends SRP_KitBase {}
class SRP_GOutdoorTableUmbrella_Kit extends SRP_KitBase {}
class SRP_Umbrella_Kit extends SRP_KitBase {}
class SRP_AdvancedWorkbench_Kit extends SRP_KitBase {}
class SRP_Carpet_Kit extends SRP_KitBase {}
class SRP_CarpetRug_Kit extends SRP_KitBase {}
class SRP_MedicalCurtains_Kit extends SRP_KitBase {}







// Base Building
class SRP_SmallDoor_Kit extends SRP_KitBase {
  override bool IsBasebuildingKit()
	{
		return true;
	}
	
	override bool HasProxyParts()
	{
		return true;
	}
  override bool DisassembleOnLastDetach()
	{
		return true;
	}

  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		// super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
      string kitType = this.GetType();
      if (kitType != "") {
        // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
        kitType = kitType.Substring(0, kitType.Length() - 4);
      }
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(kitType, position, ECE_PLACE_ON_SURFACE));
      PlayerBase playerBase = PlayerBase.Cast( player );
      position = playerBase.GetLocalProjectionPosition();
		  orientation = playerBase.GetLocalProjectionOrientation();

			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);
			kitItem.SetAnimationPhase( "BP_Hologram", 0 );
		}

		SetIsPlaceSound(true);
	}
}
// class SRP_WindowBarricade_Kit extends SRP_KitBase {
//   override bool IsBasebuildingKit()
// 	{
// 		return true;
// 	}
	
// 	override bool HasProxyParts()
// 	{
// 		return true;
// 	}
//   override bool DisassembleOnLastDetach()
// 	{
// 		return true;
// 	}
//   override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
// 	{
// 		// super.OnPlacementComplete(player, position, orientation);
// 		if (GetGame().IsServer())
// 		{
//       string kitType = this.GetType();
//       if (kitType != "") {
//         // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
//         kitType = kitType.Substring(0, kitType.Length() - 4);
//       }
// 			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(kitType, position, ECE_PLACE_ON_SURFACE));
//       PlayerBase playerBase = PlayerBase.Cast( player );
//       position = playerBase.GetLocalProjectionPosition();
// 		  orientation = playerBase.GetLocalProjectionOrientation();

// 			kitItem.SetPosition(position);
// 			kitItem.SetOrientation(orientation);
// 			kitItem.SetAnimationPhase( "BP_Hologram", 0 );
// 		}

// 		SetIsPlaceSound(true);
// 	}
// }
class SRP_WideFence_Kit extends SRP_KitBase {
  override bool IsBasebuildingKit()
	{
		return true;
	}
	
	override bool HasProxyParts()
	{
		return true;
	}
  override bool DisassembleOnLastDetach()
	{
		return true;
	}

  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		// super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
      string kitType = this.GetType();
      if (kitType != "") {
        // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
        kitType = kitType.Substring(0, kitType.Length() - 4);
      }
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(kitType, position, ECE_PLACE_ON_SURFACE));
      PlayerBase playerBase = PlayerBase.Cast( player );
      position = playerBase.GetLocalProjectionPosition();
		  orientation = playerBase.GetLocalProjectionOrientation();

			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);
			kitItem.SetAnimationPhase( "BP_Hologram", 0 );
		}

		SetIsPlaceSound(true);
	}
}
class SRP_WoodenWallLong_Kit extends SRP_KitBase {
  override bool IsBasebuildingKit()
	{
		return true;
	}

  override bool IsDeployable()
	{
		return true;
	}
	
	override bool HasProxyParts()
	{
		return true;
	}
  override bool DisassembleOnLastDetach()
	{
		return true;
	}
  
  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		// super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
      string kitType = this.GetType();
      if (kitType != "") {
        // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
        kitType = kitType.Substring(0, kitType.Length() - 4);
      }
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(kitType, position, ECE_PLACE_ON_SURFACE));

			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);
			kitItem.SetAnimationPhase( "hologram", 0 );
			//make the kit invisible, so it can be destroyed from deploy UA when action ends
			HideAllSelections();
		}

		SetIsPlaceSound(true);
	}
}




class SRP_ConstructionKitBase extends KitBase
{
  string GetKitItemName()
  {
    string kitType = this.GetType();
    if (kitType != "") {
      // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
      kitType = kitType.Substring(0, kitType.Length() - 4);
    }
    return kitType;
  }

  override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
		
		if ( GetGame().IsServer() )
		{
			//Create fence
      string constructionType = GetKitItemName();
      Print("construction type "+ constructionType);
			EntityAI buildableItem = EntityAI.Cast( GetGame().CreateObjectEx( constructionType, GetPosition(), ECE_PLACE_ON_SURFACE ) );
			buildableItem.SetPosition( position );
			buildableItem.SetOrientation( orientation );
			
			//make the kit invisible, so it can be destroyed from deploy UA when action ends
			HideAllSelections();
			
			SetIsDeploySound( true );
		}	
	}
};


class SRP_WindowBarricade_Kit extends SRP_ConstructionKitBase {
  override bool DoPlacingHeightCheck()
	{
		return false;
	}
};