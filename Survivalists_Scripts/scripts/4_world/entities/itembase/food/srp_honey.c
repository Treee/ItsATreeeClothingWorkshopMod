class Honey_Yeast extends Honey{};

class Honey_Gluttony extends Honey
{
  override bool HasCharcoalEffect()
  {
    return true;
  }
  override bool HasEpinephrineEffect()
  {
    return true;
  }
  override bool HasRadioactiveEffect()
  {
    return true;
  }
};
class Honey_PigletPudding extends Honey_Gluttony{};

