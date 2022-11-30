modded class Clothing
{
  protected string m_BaseClassName;
  protected ref array<string> m_DyableColorVariants;

  override void InitItemVariables()
	{
    super.InitItemVariables();
    InitializeColorVariants();
  };
	override void OnWasAttached( EntityAI parent, int slot_id ) 
  {   
    super.OnWasAttached(parent, slot_id);
    PlayerBase player;
    if(Class.CastTo(player, parent))
    {
      float protection = GetProtectionLevel(DEF_BIOLOGICAL);
      if (protection > 0)
      {
        player.ModifyContaminationProtection(protection);
      }
    }
  }
	override void OnWasDetached(EntityAI parent, int slot_id)
	{
		super.OnWasDetached(parent,slot_id);

		PlayerBase player = PlayerBase.Cast(parent);
		if(Class.CastTo(player, parent))
    {
      float protection = GetProtectionLevel(DEF_BIOLOGICAL);
      if (protection > 0)
      {
        player.ModifyContaminationProtection(-protection);
      }
    }	
	}

  void InitializeColorVariants()
  {
    // Print("Initing item: " + GetType());
    m_BaseClassName = "";
    if (ConfigIsExisting("rootClassName"))
    {
      m_BaseClassName = ConfigGetString("rootClassName");
    }
    m_DyableColorVariants = new array<string>;
    if (ConfigIsExisting("colorVariants"))
    {
      ConfigGetTextArray("colorVariants", m_DyableColorVariants);
    }
  }
  TStringArray GetDyableColorVariants()
  {
    return m_DyableColorVariants;
  }
  void SetDyableBaseClassName(string baseClassName)
  {
    m_BaseClassName = baseClassName;
  }
  string GetDyableBaseClassName()
  {
    return m_BaseClassName;
  }
  bool HasDyableOptions()
  {
    return m_DyableColorVariants.Count() > 0;
  }
  string GetDyeOption(int index)
  {
    if (HasDyableOptions() && m_DyableColorVariants.IsValidIndex(index))
    {
      return m_DyableColorVariants.Get(index);
    }
    return "";
  }
  int GetTotalColorVariations()
  {
    return m_DyableColorVariants.Count();
  }
};