modded class MiscGameplayFunctions
{
//========================= HELPER LISTS
  static string GetRandomRockOreType()
  {
    return GetRockOreTypes().GetRandomElement();
  }
  static TStringArray GetRockOreTypes()
  {
    return {
      "SRP_Mining_StoneChunk_Copper",
      "SRP_Mining_StoneChunk_Iron",
      "SRP_Mining_StoneChunk_Tin",
      "SRP_Mining_StoneChunk_Gold",
      "SRP_Mining_StoneChunk_Platinum",
      "SRP_Mining_StoneChunk_Silver",
      "SRP_Mining_StoneChunk_Zinc",
      "SRP_Mining_StoneChunk_Gemstone",
    };
  }
  static string GetRandomRawGemType()
  {
    return GetRawGemTypes().GetRandomElement();
  }
  static TStringArray GetRawGemTypes()
  {
    return {
      "SRP_Mining_RawGem_Ruby",
      "SRP_Mining_RawGem_Sapphire",
      "SRP_Mining_RawGem_Jade",
      "SRP_Mining_RawGem_Amethyst",
      "SRP_Mining_RawGem_Aquamarine",
      "SRP_Mining_RawGem_Citrine",
      "SRP_Mining_RawGem_Diamond",
      "SRP_Mining_RawGem_Topaz",
      "SRP_Mining_RawGem_Quartz",
      "SRP_Mining_RawGem_Opal",
    };
  }  
};