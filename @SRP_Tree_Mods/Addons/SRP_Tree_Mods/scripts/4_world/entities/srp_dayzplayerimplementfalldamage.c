modded class DayZPlayerImplementFallDamage
{
  override void HandleFallDamage(float pHeight)
  {
		if (GetGame().IsServer())
		{
      EntityAI maskAttachment = m_Player.FindAttachmentBySlotName("Armband");
			//! no dmg height
			if (pHeight <= FD_DMG_FROM_HEIGHT || (maskAttachment && maskAttachment.GetType() == "DUB_Monster"))
				return;

			vector posMS = m_Player.WorldToModel(m_Player.GetPosition());
			
			float normalizedHeight = MiscGameplayFunctions.Normalize(pHeight, FD_MAX_HEIGHT_LEG_BREAK); //Normalize the height player fell from
			float dmg; //Damage dealt to leg
			
			//This uses a quadratic EaseInOut function ro deal damage to legs
			/*if (normalizedHeight < 0.5)
				dmg = 2*Math.Pow(normalizedHeight,2);
			else
				dmg = 1 - Math.Pow(-2*normalizedHeight+2,2)/2;*/
			
			dmg = Easing.EaseInOutQuart(normalizedHeight);
			
			//We multiply by 100 to "un normalize" value and multiply by a random factor to deal extra damage to legs
			dmg = (dmg * 100) * Math.RandomFloatInclusive(0.8, 1.5);
			
			if ( pHeight >= FD_MAX_HEIGHT_LEG_BREAK )
				dmg += 100; //Simply adding 100 should be enough to break legs 100% of time without calling GetHealth method
			
			PlayerBase.Cast(m_Player).DamageAllLegs(dmg);
			
			//Deal global damage when falling
			m_Player.ProcessDirectDamage( DT_CUSTOM, m_Player, "", FD_AMMO, posMS, DamageCoef(pHeight) );

			//! updates injury state of player immediately
			PlayerBase pb = PlayerBase.Cast(m_Player);
			if (pb) pb.ForceUpdateInjuredState();
		}
  };
};