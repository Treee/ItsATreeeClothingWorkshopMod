//================================================ METAL BUCKETS
class SRP_MetalBucket extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        player_PB.AddHealth("", "Blood", -500); //do 250 blood dmg
        player_PB.AddHealth("", "", -50); //do 250 blood dmg
        player_PB.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
      }
    }
  }
};
class SRP_MetalBucket_Lime extends SRP_MetalBucket{};
class SRP_MetalBucket_Mortar extends SRP_MetalBucket
{
  int m_HeatCounter = 0;

  void IncrementHeatTimer(int increment = 1)
  {
    m_HeatCounter += increment;
  }

  void ResetCounter()
  {
    m_HeatCounter = 0;
  }

  void HandleHardenEvent()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (m_HeatCounter > 600)
    {
      GetGame().CreateObjectEx("SRP_ForgeCrucible_Empty", this.GetPosition(), false);
      this.Delete();
    }
  }
};

//==================================================INGOT MOLDS
class SRP_ForgeIngotMold_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        player_PB.AddHealth("", "Blood", -500); //do 250 blood dmg
        player_PB.AddHealth("", "", -50); //do 250 blood dmg
        player_PB.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
      }
    }
  }

  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_MetalEmpty extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Lime extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Mortar extends SRP_ForgeIngotMold_ColorBase
{
  int m_HeatCounter = 0;

  void IncrementHeatTimer(int increment = 1)
  {
    m_HeatCounter += increment;
  }

  void ResetCounter()
  {
    m_HeatCounter = 0;
  }

  void HandleHardenEvent()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (m_HeatCounter > 600)
    {
      GetGame().CreateObjectEx("SRP_ForgeIngotMold_Empty", this.GetPosition(), false);
      this.Delete();
    }
  }

  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Empty extends SRP_ForgeIngotMold_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionEmptyIngotMold);
	}
};
class SRP_ForgeIngotMold_Copper extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Tin extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Bronze extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Iron extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Gold extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Platinum extends SRP_ForgeIngotMold_ColorBase{};

//=====================================================INGOTS
class SRP_ForgeIngot_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        player_PB.AddHealth("", "Blood", -500); //do 250 blood dmg
        player_PB.AddHealth("", "", -50); //do 250 blood dmg
        player_PB.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
      }
    }
  }
};

class SRP_ForgeIngot_Copper extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Tin extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Bronze extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Iron extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Gold extends SRP_ForgeIngot_ColorBase{};
class SRP_ForgeIngot_Platinum extends SRP_ForgeIngot_ColorBase{};


//=====================================================CRUCIBLES
class SRP_ForgeCrucible_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        player_PB.AddHealth("", "Blood", -500); //do 250 blood dmg
        player_PB.AddHealth("", "", -50); //do 250 blood dmg
        player_PB.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
      }
    }
  }
};

class SRP_ForgeCrucible_Empty extends SRP_ForgeCrucible_ColorBase
{
  int m_HeatCounter = 0;

  void IncrementHeatTimer(int increment = 1)
  {
    // only increment heat if there is something inside the raw ore slot
    EntityAI attachment = FindAttachmentBySlotName("SRP_RawOre");
    if (attachment)
    {
      m_HeatCounter += increment;
    }
  }

  void ResetCounter()
  {
    m_HeatCounter = 0;
  }

  void HandleHardenEvent()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (m_HeatCounter > 600)
    {
      EntityAI attachment = FindAttachmentBySlotName("SRP_RawOre");
      SRP_Mining_RawOre_ColorBase rawOre = SRP_Mining_RawOre_ColorBase.Cast(attachment);
      if (rawOre && rawOre.GetQuantity() == 4)
      {
				string color = rawOre.ConfigGetString("color");
        string newClassName = "SRP_ForgeCrucible_" + color;
        ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(newClassName, this.GetPosition(), false));
        newItem.SetTemperature(200);
        this.Delete();
      }
    }
  }
};

class SRP_ForgeCrucible_Copper extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Tin extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Bronze extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Iron extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Gold extends SRP_ForgeCrucible_ColorBase{};
class SRP_ForgeCrucible_Platinum extends SRP_ForgeCrucible_ColorBase{};

//======================================================= ORE
class SRP_Mining_RawOre_ColorBase extends Inventory_Base{};
class SRP_Mining_RawOre_Copper extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Tin extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Bronze extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Iron extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Gold extends SRP_Mining_RawOre_ColorBase{};
class SRP_Mining_RawOre_Platinum extends SRP_Mining_RawOre_ColorBase{};



class SRP_MiningTool_IronTongsSmall extends Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionPourMoltenMetalIntoMold);
	}
};
class SRP_MiningTool_IronTongsMedium extends SRP_MiningTool_IronTongsSmall{};
class SRP_MiningTool_IronTongsLarge extends SRP_MiningTool_IronTongsSmall{};

