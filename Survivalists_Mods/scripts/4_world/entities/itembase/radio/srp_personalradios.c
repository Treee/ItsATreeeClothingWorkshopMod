class SRP_PersonalRadio_SneakyBear extends PersonalRadio
{
	void SRP_PersonalRadio_SneakyBear()
	{ 
    // turn off the ability to receive sound
    if (GetCompEM().IsWorking())
    {
      GetCompEM().SwitchOn();
    }
    EnableReceive(false);
    EnableBroadcast(true);
	}

  override void OnSwitchOn()
	{
		super.OnSwitchOn();

    EnableReceive(false);
    EnableBroadcast(true);
	}	

  override bool IsInventoryVisible()
  {
    return false;
  }
};
