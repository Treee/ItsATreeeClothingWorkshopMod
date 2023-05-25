modded class House
{
  bool IsBioFlower()
  {
    return false;
  }
  bool CanBeDeconstructed()
  {
    return false;
  }
  string GetKitName()
  {
    return string.Format("%1_Kit", GetType());
  }
};