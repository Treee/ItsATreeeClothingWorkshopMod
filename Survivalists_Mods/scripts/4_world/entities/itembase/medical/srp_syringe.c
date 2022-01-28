class SRP_FullSyringe_Base: Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionInjectTarget);
		AddAction(ActionInjectSelf);
	}
};

class SRP_FullSyringe_Kuru: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.BRAIN, 2000); // max of 5000
	}
};
class SRP_FullSyringe_KuruCure: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.BRAIN,-5000);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_BRAIN);
    player.RemoveAgent(eAgents.BRAIN);    
	}
};

class SRP_FullSyringe_Salmonella: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.SALMONELLA, 100); // max of 300
	}
};
class SRP_FullSyringe_SalmonellaCure: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.SALMONELLA,-300);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_SALMONELLA);
    player.RemoveAgent(eAgents.SALMONELLA);    
	}
};

class SRP_FullSyringe_Influenza: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.INFLUENZA, 100); // max of 1000
	}
};
class SRP_FullSyringe_InfluenzaCure: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.INFLUENZA,-1000);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_COMMON_COLD);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_INFLUENZA);
    player.RemoveAgent(eAgents.INFLUENZA);    
	}
};

class SRP_FullSyringe_Cholera: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.CHOLERA, 100); // max of 1000
	}
};
class SRP_FullSyringe_CholeraCure: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.CHOLERA,-1000);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_CHOLERA);
    player.RemoveAgent(eAgents.CHOLERA);    
	}
};

class SRP_FullSyringe_Ceftazidim: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CHARCOAL);
	}
};
class SRP_FullSyringe_Ampicillin: SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.m_ModifiersManager.ActivateModifier(eModifiers.MDF_ANTIBIOTICS);
	}
};
