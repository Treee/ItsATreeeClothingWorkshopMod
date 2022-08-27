class Honey_Yeast extends Honey{};

class Honey_Gluttony extends Honey
{
  override bool IsCharcoalFood()
  {
    return true;
  }
  override bool IsAdrenalineFood()
  {
    return true;
  }
  override bool IsRadioactiveFood()
  {
    return true;
  }
};
class Honey_PigletPudding extends Honey_Gluttony{};

