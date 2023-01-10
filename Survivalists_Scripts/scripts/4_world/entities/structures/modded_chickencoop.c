class Land_misc_chickenCoop extends House
{
  protected bool m_HasBeenSearched = false;

  void Land_misc_chickenCoop()
  {
    RegisterNetSyncVariableBool("m_HasBeenSearched");
  }
  
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
	}
  void SetSearched(bool searched)
  {
    m_HasBeenSearched = searched;
  }
  bool HasBeenSearched()
  {
    return m_HasBeenSearched;
  }  
};