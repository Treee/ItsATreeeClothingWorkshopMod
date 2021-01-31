modded class GesturesMenu
{
  override void GetGestureItems(out ref array<ref GestureMenuItem> gesture_items, GestureCategories category)
  {
    super.GetGestureItems(gesture_items, category);
    switch (category)
    {
      case GestureCategories.CATEGORY_2: //STR_USRACT_EMOTE_CATEGORY_TAUNTS
      {
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.ID_EMOTE_LAUGH, "Laugh", GestureCategories.CATEGORY_2));
        break;
      }
    }
  }
  
  override void OnMenuRelease()
  {
    super.OnMenuRelease();
  }
}