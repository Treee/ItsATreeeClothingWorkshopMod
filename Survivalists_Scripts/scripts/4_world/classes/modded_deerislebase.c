modded class DeerIsleBase
{
    override void ShowDeerisleCredits(){}
    override void TempleTeleportHandler(PlayerBase player)
    {
        float distanceToAltar;
        string sZoneCheck;

        distanceToAltar = vector.Distance(player.GetPosition(), vTempleAltar);

        if (isTempleActive && HasPlayerTeleportConditions(player))
        {
            if (distanceToAltar <= templeTriggerTeleportRadius)
            {
                player.SetPosition(vTempleEntrances.GetRandomElement());

                SendClientMessages("An eerie shift in the winds is felt.", 3, 5, 3);

                SRP_Mining_CutGem_ColorBase opalGem;
                if (Class.CastTo(opalGem, player.GetItemInHands()))
                {
                    opalGem.SetIsEnergized(true);
                }
            }
        }
        // super.TempleTeleportHandler(player);
    }

    override void TempleTeleportExitHandler(PlayerBase player)
    {
        float distanceToAltar;
        string sZoneCheck;

        distanceToAltar = vector.Distance(player.GetPosition(), VTempleExitFrom);

        if (distanceToAltar <= templeTriggerTeleportRadius)
        {
            SRP_Mining_CutGem_ColorBase opalGem;
            if (Class.CastTo(opalGem, player.GetItemInHands()))
            {
                if (opalGem.IsEnergized())
                {
                TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(opalGem, "SRP_Mining_CutGem_AltarShard", player);
                lambda.SetTransferParams(true, true, true, true, 1);
                player.ServerReplaceItemInHandsWithNew(lambda);
                }
            }
        }
        super.TempleTeleportExitHandler(player);
    }
};