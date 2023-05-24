class SRP_FullSyringe_Base extends Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionInjectTarget);
		AddAction(ActionInjectSelf);
	}
};

class SRP_FullSyringe_Kuru extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.BRAIN, 2000); // max of 5000
	}
};
class SRP_FullSyringe_KuruCure extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.BRAIN,-50000);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_BRAIN);
    player.RemoveAgent(eAgents.BRAIN);    
	}
};

class SRP_FullSyringe_Salmonella extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.SALMONELLA, 100); // max of 300
	}
};
class SRP_FullSyringe_SalmonellaCure extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.SALMONELLA,-30000);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_SALMONELLA);
    player.RemoveAgent(eAgents.SALMONELLA);    
	}
};

class SRP_FullSyringe_Influenza extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.INFLUENZA, 100); // max of 1000
	}
};
class SRP_FullSyringe_InfluenzaCure extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.INFLUENZA,-10000);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_COMMON_COLD);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_INFLUENZA);
    player.RemoveAgent(eAgents.INFLUENZA);    
	}
};

class SRP_FullSyringe_Cholera extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.CHOLERA, 100); // max of 1000
	}
};
class SRP_FullSyringe_CholeraCure extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.CHOLERA,-10000);
    player.m_ModifiersManager.DeactivateModifier(eModifiers.MDF_CHOLERA);
    player.RemoveAgent(eAgents.CHOLERA);    
	}
};

class SRP_FullSyringe_Ceftazidim extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.SALMONELLA, 30); // max of 300
	}
};
class SRP_FullSyringe_CeftazidimCure extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.SALMONELLA,-30000);
    player.InsertAgent(eAgents.FOOD_POISON,-30000);
    player.m_ModifiersManager.ActivateModifier(eModifiers.MDF_CHARCOAL);
    player.RemoveAgent(eAgents.SALMONELLA);
    player.RemoveAgent(eAgents.FOOD_POISON);
	}
};

class SRP_FullSyringe_Ampicillin extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.WOUND_AGENT, 100); // max of 1000
	}
};
class SRP_FullSyringe_AmpicillinCure extends SRP_FullSyringe_Base
{
  override void OnApply(PlayerBase player)
	{
    player.InsertAgent(eAgents.WOUND_AGENT,-10000);
    player.m_ModifiersManager.ActivateModifier(eModifiers.MDF_ANTIBIOTICS);
    player.RemoveAgent(eAgents.WOUND_AGENT);
	}
};