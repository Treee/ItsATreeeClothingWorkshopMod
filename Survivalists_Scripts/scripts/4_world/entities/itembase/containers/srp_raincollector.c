class SRP_RainCollector extends Container_Base
{
  protected float m_CollectionLifespan;
  protected bool m_CanCollectRain;
	protected const	int	RAIN_COEFFICIENT = 250;

  void SRP_RainCollector()
  {
    m_CollectionLifespan = 0.0;
    m_CanCollectRain = false;
    SetEventMask(EntityEvent.POSTSIMULATE);
  }

  override void EOnPostSimulate(IEntity other, float timeSlice)
	{
    if (!GetGame().IsDedicatedServer())
      return;
    if (m_CollectionLifespan > 10) // wait 10 seconds before doing things 
    {
      FillRainCollection();
      m_CollectionLifespan = 0;
    }
    m_CollectionLifespan += timeSlice;
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
		if (item.GetType() == "MetalPlate")
		{
			if (!MiscGameplayFunctions.IsUnderRoof(this))
			{
				m_CanCollectRain = true;
			}
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		if (item.GetType() == "MetalPlate")
		{
			m_CanCollectRain = false;
		}
	}
	override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
  override bool CanPutIntoHands (EntityAI parent)
	{
		return false;
	}
  override bool IsOpen()
	{
		return true;
	}
  void FillRainCollection()
  {
    if (!m_CanCollectRain)
      return;
    if (GetQuantity() > GetQuantityMax())
      return;

    float rain_intensity = GetGame().GetWeather().GetRain().GetActual();
    if ( rain_intensity > 0 ) 
    {
      float fill_per_update = RAIN_COEFFICIENT * rain_intensity;
      Liquid.FillContainerEnviro( this, LIQUID_WATER, fill_per_update );
      // Print( "Quantity of " + GetType() + " is: " +  GetQuantity() );
    }
  }
  override bool IsWell()
	{
		return true;
	}
  override void SetActions()
	{
		super.SetActions();

    AddAction(ActionWashHandsWellOne);
		AddAction(ActionDrinkWellContinuous);
	}
};