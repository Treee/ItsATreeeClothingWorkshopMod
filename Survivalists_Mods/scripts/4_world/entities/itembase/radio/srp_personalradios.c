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
	}

  override bool IsInventoryVisible()
  {
    return false;
  }
};
