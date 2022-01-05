class SRP_PatchFlag_ColorBase extends Clothing{};
class SRP_PatchLogo_ColorBase extends Clothing{};
class SRP_PatchFlag_StarterKit1 extends Clothing
{
  bool CanCraftIntoPatch(string firstLetter)
  {
    BBP_Letter_Base category = BBP_Letter_Base.Cast(FindAttachmentBySlotName("SRP_MagnetLetter"));
    if (category)
    {
      string letterType = category.GetType();
      string lastLetter = letterType.Get(letterType.Length() - 1);
      lastLetter.ToLower();

      bool sewing1 = FindAttachmentBySlotName("SRP_SewingThread1") != null;
      bool sewing2 = FindAttachmentBySlotName("SRP_SewingThread2") != null;
      bool letter = lastLetter == firstLetter;
      // Print("letter: " + firstLetter + " matching? " + letter + " thread1: " + sewing1 + " thread2: " + sewing2);
      return (sewing1 && sewing2 && letter);
    }
    return false;
  }
};
class SRP_PatchFlag_StarterKit2 extends SRP_PatchFlag_StarterKit1{};
