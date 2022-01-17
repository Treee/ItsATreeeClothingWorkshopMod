modded class WeedEffectSymptom
{
	PPERequester_WeedEffect m_RequesterWeedEffect;

  const float fadeTimeMax = 5.0;
  float fadeTimeMin = 0;
  float currentFadeTime = 0;
  int signMultiplier = 1;

	override void OnInit()
	{
    super.OnInit();
		if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterWeedEffect,PPERequester_WeedEffect.Cast(PPERequesterBank.GetRequester(PPERequester_WeedEffect)));
		}
	}

  override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    if (currentFadeTime > fadeTimeMax)
    {
      signMultiplier *= -1;
    }
    else if (currentFadeTime < fadeTimeMin)
    {
      signMultiplier *= -1;
    }
    currentFadeTime += (deltatime * signMultiplier);


    m_RequesterWeedEffect.SetWeedColorSaturation(currentFadeTime);
	}
};
