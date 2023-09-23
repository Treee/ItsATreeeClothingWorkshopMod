class SRP_TerritoryFlag_Crafting extends TerritoryFlag
{
  protected bool m_IsRaidable = false;

  void SRP_TerritoryFlag_Crafting()
  {
    m_IsRaidable = IsAllowedToRaidArea();
  }
  bool IsRaidable()
  {
    return m_IsRaidable;
  }
  protected bool IsAllowedToRaidArea()
  {
    int zellers = CalculateZellersRule();
    string day = MapIntToDay(zellers);

    if (day == "Saturday" ||  day == "Sunday")    
      return true;    
    return false;
  }
  protected int CalculateZellersRule()
  {
		int year, month, day;
		GetYearMonthDayUTC(year,month,day);
    // F=k+ [(13*m-1)/5] +D+ [D/4] +[C/4]-2*C where    
    // k is  the day of the month.
    // m is the month number. (starts March = 1 Apr = 2 ... Jan = 11, Feb = 12)
    // D is the last two digits of the year.
    // C is the first two digits of the year.
    // discard all decimal values

    // since months start at March with Zellers, wrap Jan/feb into previous year
    if (month < 2)
      year -= 1;

    month -= 2;
    // wrap jan/feb back to 12
    if (month < 1)
      month =  Math.AbsInt(month + 12);

    // Print(string.Format("year: %1 month: %2 day: %3", year, month, day));
    int firstDigits = year / 100;
    int lastDigits = year % 100;
    // Print(string.Format("first: %1 last: %2", firstDigits, lastDigits));
    // D calculations
    int dPrime = lastDigits + (lastDigits / 4);
    // C calculations
    int cPrime = (firstDigits / 4) - (2 * firstDigits);
    // M calculations
    int mPrime = ((13 * month - 1) / 5);
    // Final calculation
    int F = day + mPrime + dPrime + cPrime;
    // mod 7 days a week
    int modF = F % 7;
    return modF;    
  }

  protected string MapIntToDay(int day)
  {
    switch(day)
    {
      case 0:
        return "Sunday";
      break;
      case 1:
        return "Monday";
      break;
      case 2:
        return "Tuesday";
      break;
      case 3:
        return "Wednesday";
      break;
      case 4:
        return "Thursday";
      break;
      case 5:
        return "Friday";
      break;
      case 6:
        return "Saturday";
      break;
    }
    return "";
  }
  override void AfterStoreLoad()
	{
		super.AfterStoreLoad();
    // always keep the flag up and refreshed
		AnimateFlag(0);
		AddRefresherTime01(1);
	}
};

