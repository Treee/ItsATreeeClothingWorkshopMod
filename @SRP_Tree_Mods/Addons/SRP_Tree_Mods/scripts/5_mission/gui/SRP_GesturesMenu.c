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
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_COUGH, "Cough", GestureCategories.CATEGORY_5));
        // gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_BLINDNESS, "Blindness", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_BULLET_HIT, "Bullet Hit", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_BLEEDING_SOURCE, "Bleed", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_BLOODLOSS, "Blood Loss", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_SNEEZE, "Sneeze", GestureCategories.CATEGORY_5));
        // gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_FEVERBLUR, "Fever", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_LAUGHTER, "Laugh", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_UNCONSCIOUS, "Unconscious", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_FREEZE, "Shiver", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_HOT, "Sweat", GestureCategories.CATEGORY_5));
        gesture_items.Insert(new GestureMenuItem(EmoteConstants.SRP_EMOTE_LEGBREAK, "Break Leg", GestureCategories.CATEGORY_5));
        break;
      }
    }
  }
  
  override void OnMenuRelease()
  {
    super.OnMenuRelease();
  }
}