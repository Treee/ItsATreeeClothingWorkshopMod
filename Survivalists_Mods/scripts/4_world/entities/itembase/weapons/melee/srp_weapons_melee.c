class SRP_Trenchknife extends HuntingKnife {};
class SRP_KarambitKnife extends HuntingKnife {};
class SRP_KatanaSlim extends Sword {};
class SRP_BerserkSword extends Sword 
{
  override bool IsSprintRemoved()
  {
    return true;
  }
};
