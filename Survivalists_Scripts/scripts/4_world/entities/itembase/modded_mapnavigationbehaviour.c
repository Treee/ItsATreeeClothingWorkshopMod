modded class MapNavigationBehaviour
{
  bool PlayerHasNavigationItem()
  {    
    return m_NavigationType != EMapNavigationType.BASIC;
  }
};