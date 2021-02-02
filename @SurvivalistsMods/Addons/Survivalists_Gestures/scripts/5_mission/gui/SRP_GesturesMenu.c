modded class GesturesMenu
{
  override void GetGestureItems(out ref array<ref GestureMenuItem> gesture_items, GestureCategories category)
  {
    super.GetGestureItems(gesture_items, category);
    switch (category)
    {
      case GestureCategories.CATEGORIES:
      {
        gesture_items.Insert( new GestureMenuItem( GestureCategories.CATEGORY_5, "Custom", 	GestureCategories.CATEGORIES ) );
        break;
      }
      case GestureCategories.CATEGORY_5: //STR_USRACT_EMOTE_CATEGORY_TAUNTS
      {
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.ID_EMOTE_LAUGH, "Laugh", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.ID_EMOTE_COUGH, "Cough", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.ID_EMOTE_SNEEZE, "Sneeze", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.ID_EMOTE_SHIVER, "Shiver", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.ID_EMOTE_UNCONSCIOUS, "Unconscious", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.ID_EMOTE_BREAK_LEG, "Break Leg", GestureCategories.CATEGORY_5));
        break;
      }
    }
  }
  
  override void OnMenuRelease()
  {
    super.OnMenuRelease();
  }
}