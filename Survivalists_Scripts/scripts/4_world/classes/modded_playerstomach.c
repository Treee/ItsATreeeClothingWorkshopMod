modded class PlayerStomach
{
  override void ProcessNutrients(float delta_time)
	{
    super.ProcessNutrients(delta_time);
    // slowly regenerate to max. max = fully sober
    m_Player.GetStatAlcoholism().Add(0.01);
    // if (m_Player.IsDrunkIncapacitated() && !m_Player.IsUnconscious())
    // {
    //   m_Player.SRP_SetUnconscious(10);
    // }
  }
};