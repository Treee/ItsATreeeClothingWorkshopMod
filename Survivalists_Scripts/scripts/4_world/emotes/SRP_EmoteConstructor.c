modded class EmoteConstructor
{
	override void RegisterEmotes(TTypenameArray emotes)
	{
    super.RegisterEmotes(emotes);
		
    emotes.Insert(EmoteCoughing);
    emotes.Insert(EmoteBlind);
    emotes.Insert(EmoteBulletHit);
    emotes.Insert(EmoteBleedingSource);
    emotes.Insert(EmoteBloodloss);
    emotes.Insert(EmoteSneeze);
    emotes.Insert(EmoteFeverBlur);
    emotes.Insert(EmoteLaughter);
    emotes.Insert(EmoteUnconscious);
    emotes.Insert(EmoteFreeze);
    emotes.Insert(EmoteHot);
    emotes.Insert(EmoteLegBreak);

    int scratchBallsAnimation = emotes.Find(EmoteSurAnmScratchBalls);
    if (scratchBallsAnimation > -1)
    {
      emotes.Remove(scratchBallsAnimation);
    }
    int slapAssAnimation = emotes.Find(EmoteSurAnmPoplacaniPoZadku);
    if (slapAssAnimation > -1)
    {
      emotes.Remove(slapAssAnimation);
    }
    
	}
}