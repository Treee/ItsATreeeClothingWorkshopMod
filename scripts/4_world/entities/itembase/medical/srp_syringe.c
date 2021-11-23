class SRP_FullSyringe_Base: Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPInjectSelf);
		AddAction(ActionSRPInjectTarget);
	}
};
class SRP_FullSyringe_Kuru: SRP_FullSyringe_Base{};
class SRP_FullSyringe_KuruCure: SRP_FullSyringe_Base{};

class SRP_FullSyringe_Salmonella: SRP_FullSyringe_Base{};
class SRP_FullSyringe_SalmonellaCure: SRP_FullSyringe_Base{};

class SRP_FullSyringe_Influenza: SRP_FullSyringe_Base{};
class SRP_FullSyringe_InfluenzaCure: SRP_FullSyringe_Base{};

class SRP_FullSyringe_Cholera: SRP_FullSyringe_Base{};
class SRP_FullSyringe_CholeraCure: SRP_FullSyringe_Base{};

class SRP_FullSyringe_Ceftazidim: SRP_FullSyringe_Base{};
class SRP_FullSyringe_Ampicillin: SRP_FullSyringe_Base{};