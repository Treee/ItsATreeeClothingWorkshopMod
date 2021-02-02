modded class EmoteConstructor
{
	void RegisterEmotes(TTypenameArray emotes)
	{
    super.RegisterEmotes(emotes);
		
    emotes.Insert(EmoteLaughing);
    emotes.Insert(EmoteCoughing);
    emotes.Insert(EmoteSneezing);
    emotes.Insert(EmoteShiver);
    emotes.Insert(EmoteUnconscious);
    emotes.Insert(EmoteBreakLeg);
	}
}