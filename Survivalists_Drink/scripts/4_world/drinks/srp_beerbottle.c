class SRP_BeerBottle extends Bottle_Base
{
  override bool IsAlcohol()
  {
    return true;
  }
};

class SRP_BeerBottle_DoublTap extends SRP_BeerBottle
{
  override bool IsAlcohol()
  {
    return false;
  }
};
class SRP_BeerBottle_Electric extends SRP_BeerBottle
{
  override bool IsAlcohol()
  {
    return false;
  }
};
class SRP_BeerBottle_Juggernaut extends SRP_BeerBottle
{
  override bool IsAlcohol()
  {
    return false;
  }
};
class SRP_BeerBottle_Reviver extends SRP_BeerBottle
{
  override bool IsAlcohol()
  {
    return false;
  }
};
class SRP_BeerBottle_Speedy extends SRP_BeerBottle
{
  override bool IsAlcohol()
  {
    return false;
  }
};
