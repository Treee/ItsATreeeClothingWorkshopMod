class SRP_BeerBottle extends Bottle_Base
{
  override bool IsAlcoholDrink()
  {
    return true;
  }
};

class SRP_BeerBottle_DoublTap extends SRP_BeerBottle
{
  override bool IsAlcoholDrink()
  {
    return false;
  }
  override bool IsAntibioticDrink()
  {
    return true;
  }
};
class SRP_BeerBottle_Electric extends SRP_BeerBottle
{
  override bool IsAlcoholDrink()
  {
    return false;
  }
  override bool IsBloodRegenDrink()
  {
    return true;
  }
  override int GetBloodRegenDrinkTotal()
  {
    return 10;
  }
};
class SRP_BeerBottle_Juggernaut extends SRP_BeerBottle
{
  override bool IsAlcoholDrink()
  {
    return false;
  }
  override bool IsShockRegenDrink()
  {
    return true;
  }
  override int GetShockRegenDrinkTotal()
  {
    return 10;
  }
};
class SRP_BeerBottle_Reviver extends SRP_BeerBottle
{
  override bool IsAlcoholDrink()
  {
    return false;
  }
  override bool IsHealthRegenDrink()
  {
    return true;
  }
  override int GetHealthRegenDrinkTotal()
  {
    return 10;
  }
};
class SRP_BeerBottle_Speedy extends SRP_BeerBottle
{
  override bool IsAlcoholDrink()
  {
    return false;
  }
  override bool IsCaffeinatedDrink()
  {
    return true;
  }
};
