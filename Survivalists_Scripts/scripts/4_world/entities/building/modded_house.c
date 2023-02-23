modded class House
{
  bool CanBeDeconstructed()
  {
    return false;
  }
  string GetKitName()
  {
    return string.Format("%1_Kit", GetType());
  }
};