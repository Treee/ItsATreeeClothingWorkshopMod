class CraftingConfig : Managed  // TailorCraftClasses
{
  string craftingBenchType;
  string pathToMainBackgroundImg;
  string pathToRepairImg;
  string pathToPaintImg;
  string pathToCraftImg; 
  ref array<ref CraftedItem> craftedItems = new array<ref CraftedItem>();
}

class CraftedItem  // TailorCraftItem
{
  string result;
  int resultCount;
  string craftType;
  string recipeName;
  ref array<string> requiredAttachments = new array<string>();
  ref array<ref CraftingComponent> craftingComponents = new array<ref CraftingComponent>();
}

class CraftingComponent  // TailorCraftComponent
{
  string className;
  int amount;
  bool destroy;
  float changeHealth;
}