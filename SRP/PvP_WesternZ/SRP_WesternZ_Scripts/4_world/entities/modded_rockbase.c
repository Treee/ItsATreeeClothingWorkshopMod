modded class RockBase
{
  // halve default dmg to item
  override float GetDamageToMiningItemEachDrop(ItemBase item)
  {
    return ( super.GetDamageToMiningItemEachDrop(item) / 3 );
  }
};