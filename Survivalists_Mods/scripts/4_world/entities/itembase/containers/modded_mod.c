modded class MassNBC_Bag
{
	ref array<string> NBCCargo = {"NBCbootsBase", "NBCHoodBase", "NBCPantsBase", "NBCJacketBase","NBCGloves_ColorBase", "GP5GasMask", "PMK_5A_Gas_Mask"};
	
  void ~MassNBC_Bag()
  {
    delete NBCCargo;
  }

	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}
		foreach (string allowedCargo : NBCCargo)
		{
			if (item.IsKindOf(allowedCargo))
			{
				return true;
			}
      if (item.GetType() == allowedCargo)
			{
				return true;
			}
		}
		return false;
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
		{
			return false;
		}

		foreach (string allowedCargo : NBCCargo)
		{
			if (new_entity.IsKindOf(allowedCargo))
			{
				return true;
			}
		}

		return false;
	}
};

modded class MassRatnik
{
	override bool IsTwoHandedBehaviour() 
	{
		return true;
	}
	override bool IsHeavyBehaviour() 
	{
		return true;
	}
};

modded class Msp_Fridge_Base
{
	ref array<string> m_AllowedCargo = 
  {
    "SodaCan_ColorBase", 
    "Bottle_Base",
    "Edible_Base",
    "SRP_FullSyringe_Base",
    "SRP_InjectionVial_Base"
  };

  void ~Msp_Fridge_Base()
  {
    delete m_AllowedCargo;
  }
};

modded class BBP_Step_LadderKit
{
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
  {
    super.OnPlacementComplete(player, position, orientation);
    if( GetGame().IsDedicatedServer() )
    {
      if (m_AdminLog)
      {            
        m_AdminLog.OnPlacementComplete( player, this);
      }
    }
  }
};

class DUB_Lich: Clothing{};