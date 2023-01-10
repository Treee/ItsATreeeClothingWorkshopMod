modded class CarScript
{
  override void OnUpdate( float dt )
  {
    if (GetSpeedometer() > 50.0)
    {
      SetThrust(0, 0, 0);
    }
    super.OnUpdate(dt);
  }
};