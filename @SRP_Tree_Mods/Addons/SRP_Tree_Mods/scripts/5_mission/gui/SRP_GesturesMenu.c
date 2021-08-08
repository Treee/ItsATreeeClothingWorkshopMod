modded class GesturesMenu
{
  override void GetGestureItems(out ref array<ref GestureMenuItem> gesture_items, GestureCategories category)z
  {
    super.GetGestureItems(gesture_items, category);
    switch (category)
    {
      case GestureCategories.CATEGORIES:
      {
        gesture_items.Insert( new GestureMenuItem( GestureCategories.CATEGORY_5, "Custom", 	GestureCategories.CATEGORIES ) );
        break;
      }
      case GestureCategories.CATEGORY_2:
      {
        // reset category 2 and remove the dab emote
        gesture_items.Clear();
        
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_LOOKATME, 	"#STR_USRACT_ID_EMOTE_LOOKATME", 	GestureCategories.CATEGORY_2 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_TAUNT, 		"#STR_USRACT_ID_EMOTE_TAUNT", 		GestureCategories.CATEGORY_2 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_TAUNTELBOW, "#STR_USRACT_ID_EMOTE_TAUNTELBOW", 	GestureCategories.CATEGORY_2 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_THROAT, 	"#STR_USRACT_ID_EMOTE_THROAT", 		GestureCategories.CATEGORY_2 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_TAUNTTHINK, "#STR_USRACT_ID_EMOTE_TAUNTTHINK", 	GestureCategories.CATEGORY_2 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_FACEPALM, 	"#STR_USRACT_ID_EMOTE_FACEPALM", 	GestureCategories.CATEGORY_2 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_THUMBDOWN, 	"#STR_USRACT_ID_EMOTE_THUMBDOWN", 	GestureCategories.CATEGORY_2 ) );
        break;
      }
      case GestureCategories.CATEGORY_3:
      {
        // reset category 2 and remove the dab emote
        gesture_items.Clear();
        
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_DANCE, 		"#STR_USRACT_ID_EMOTE_DANCE", 		GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_LYINGDOWN, 	"#STR_USRACT_ID_EMOTE_LYINGDOWN", 	GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_SOS, 		"#STR_USRACT_ID_EMOTE_SOS", 		GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_RPS, 		"#STR_USRACT_ID_EMOTE_RPS", 		GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_SITA, 		"#STR_USRACT_ID_EMOTE_SITA", 		GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_SITB, 		"#STR_USRACT_ID_EMOTE_SITB", 		GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_SUICIDE, 	"#STR_USRACT_ID_EMOTE_SUICIDE", 	GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_CAMPFIRE, 	"#STR_USRACT_ID_EMOTE_CAMPFIRE", 	GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_SURRENDER, 	"#STR_USRACT_ID_EMOTE_SURRENDER", 	GestureCategories.CATEGORY_3 ) );
        gesture_items.Insert( new GestureMenuItem( EmoteConstants.ID_EMOTE_VOMIT, 		"#STR_USRACT_ID_EMOTE_VOMIT", 		GestureCategories.CATEGORY_3 ) );
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