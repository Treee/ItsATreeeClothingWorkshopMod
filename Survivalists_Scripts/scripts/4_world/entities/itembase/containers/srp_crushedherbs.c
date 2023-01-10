class SRP_CrushedHerb_Colorbase extends Edible_Base
{
  bool AreCorrectTypesAndQuantities(TStringArray types, TIntArray quantities, bool reduceQuantity = false)
  {    
    for(int i=0; i<types.Count(); i++)
    {
      if (IsCorrectTypeAndQuantity(types.Get(i), quantities.Get(i)))
      {
        // Print("Has a correct combo in this slot: ");
        if (reduceQuantity)
        {
          ReduceQuantity(quantities.Get(i));
        }
        return true;
      }
    }
    return false;
  }
  
  bool IsCorrectTypeAndQuantity(string type, int quantity)
  {
    // Print("Type: " + type + " this color: " + ConfigGetString("color") + " Quantity: " + quantity + " expected: " + GetQuantity());
    return type == ConfigGetString("color") && quantity <= GetQuantity();
  }

  void ReduceQuantity(int amount)
  {
    AddQuantity(-amount);
  }
};
class SRP_CrushedHerb_Brookmint extends SRP_CrushedHerb_Colorbase{};
class SRP_CrushedHerb_Dock extends SRP_CrushedHerb_Colorbase{};
class SRP_CrushedHerb_Valerian extends SRP_CrushedHerb_Colorbase{};
class SRP_CrushedHerb_Ribwort extends SRP_CrushedHerb_Colorbase{};
class SRP_CrushedHerb_Rosemary extends SRP_CrushedHerb_Colorbase{};
class SRP_CrushedHerb_GreenAmanita extends SRP_CrushedHerb_Colorbase{};
class SRP_CrushedHerb_Yarrow extends SRP_CrushedHerb_Colorbase{};
class SRP_CrushedHerb_Mint extends SRP_CrushedHerb_Colorbase{};

