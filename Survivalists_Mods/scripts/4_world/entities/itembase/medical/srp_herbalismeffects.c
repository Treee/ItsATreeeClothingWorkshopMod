class SRP_BandageDressing extends BandageDressing
{
  override float GetBandagingEffectivity()
	{
		return 3.0;
	};
	override float GetInfectionChance(int system = 0, Param param = null)
	{
		return 0;
	}
};

class SRP_BandageDressing_Healing extends SRP_BandageDressing{};
class SRP_BandageDressing_Shock extends SRP_BandageDressing{};
class SRP_BandageDressing_Antibiotic extends SRP_BandageDressing{};


class SRP_PainkillerTablets extends PainkillerTablets
{
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_PAINKILLERS ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_PAINKILLERS, false );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_PAINKILLERS );
	}
}

class SRP_Dexamphetamine extends SRP_PainkillerTablets{};
class SRP_Analgine extends SRP_PainkillerTablets{};
class SRP_Drotaverine extends SRP_PainkillerTablets{};

class SRP_TetracyclineAntibiotics extends TetracyclineAntibiotics
{
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_ANTIBIOTICS))//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_ANTIBIOTICS );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_ANTIBIOTICS );
	}
}

class SRP_Macropen extends SRP_TetracyclineAntibiotics{};
class SRP_Amoxicillin extends SRP_TetracyclineAntibiotics{};
class SRP_Amosin extends SRP_TetracyclineAntibiotics{};
class SRP_Ciprolet extends SRP_TetracyclineAntibiotics{};

class SRP_VitaminBottle extends VitaminBottle
{
	//Specify this item can only be combined but not split	
	override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_IMMUNITYBOOST ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_IMMUNITYBOOST );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_IMMUNITYBOOST );
	}
};
class SRP_Toradol extends SRP_VitaminBottle{};
class SRP_MagnesiumSulfate extends SRP_VitaminBottle{};
