class SRP_ShippingContainerBase extends House
{
  protected bool m_HasBeenChecked = false;
  protected bool m_RandomEventPerformed = false;

  void DoRandomDoorOpenEvent()
  {
    // Print("something happened");
    if (!HasBeenChecked())
    {
      int chanceRoll = Math.RandomIntInclusive(1,100);
      // 1-94 is nothing
      if (chanceRoll > 0 && chanceRoll <= 94) //1-94
      {
        // do nothing
      }
      else if (chanceRoll > 94 && chanceRoll < 99) //94,99
      {
        SpawnZombies(2);
        SetHasRandomEventPerformed(true);
      }
      else if (chanceRoll == 99) //99
      {
        SpawnIEDExplosion();
        SetHasRandomEventPerformed(true);
      }
      else if (chanceRoll == 100) // 100
      {
        SpawnZombies(Math.RandomIntInclusive(2,4));
        SetHasRandomEventPerformed(true);
      }
      SetHasBeenChecked(true);      
    }
  }

  bool HasBeenChecked()
  {
    return m_HasBeenChecked;
  }
  void SetHasBeenChecked(bool isChecked)
  {
    m_HasBeenChecked = isChecked;
  }
  bool HasRandomEventPerformed()
  {
    return m_RandomEventPerformed;
  }
  void SetHasRandomEventPerformed(bool isChecked)
  {
    m_RandomEventPerformed = isChecked;
  }
  void SpawnZombies(int max=0)
  {
    if ( MemoryPointExists( "sound_rainobjectinner1metal2_1" ) )
		{
			vector selection_pos = ModelToWorld( GetMemoryPointPos( "sound_rainobjectinner1metal2_1" ) );
      
      for (int i = 0; i < max; i++)
      {
        GetGame().CreateObjectEx(MiscGameplayFunctions.GetRandomEnhancedZombieType(),selection_pos, ECE_PLACE_ON_SURFACE|ECE_INITAI);	
      }
		}		
  }
  void SpawnIEDExplosion()
  {
    if ( MemoryPointExists( "doorstwin1_action" ) )
		{
			vector selection_pos = ModelToWorld( GetMemoryPointPos( "doorstwin1_action" ) );
      GetGame().CreateObjectEx("SRP_DrugExplosion",selection_pos, ECE_PLACE_ON_SURFACE);	
		}	
    if ( MemoryPointExists( "doorstwin2_action" ) )
		{
			vector selection_pos2 = ModelToWorld( GetMemoryPointPos( "doorstwin2_action" ) );
      GetGame().CreateObjectEx("SRP_DrugExplosion",selection_pos2, ECE_PLACE_ON_SURFACE);	
		}	
  }
}

class Land_Container_1Aoh extends SRP_ShippingContainerBase{};
class Land_Container_1Aoh_DE extends SRP_ShippingContainerBase{};
class Land_Container_1Bo extends SRP_ShippingContainerBase{};
class Land_Container_1Bo_DE extends SRP_ShippingContainerBase{};
class Land_Container_1Mo extends SRP_ShippingContainerBase{};
class Land_Container_1Mo_DE extends SRP_ShippingContainerBase{};
class Land_Container_1Moh extends SRP_ShippingContainerBase{};
class Land_Container_1Moh_DE extends SRP_ShippingContainerBase{};