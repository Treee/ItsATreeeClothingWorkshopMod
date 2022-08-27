class SRP_Guts_PigletCookiesAcid extends Guts
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

class SRP_Guts_PigletCookiesMetal extends SRP_Guts_PigletCookiesAcid{};
class SRP_Guts_PigletCookiesBrains extends SRP_Guts_PigletCookiesAcid{};
