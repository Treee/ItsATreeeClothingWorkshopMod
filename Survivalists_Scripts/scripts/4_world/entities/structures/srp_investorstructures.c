class SRP_InvestorStructure_Base extends ItemBase
{
    override bool CanPutInCargo( EntityAI parent )
	{
        return false;
	}
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    }
};

class SRP_StoneAltar_UniqueItem_Snowblind extends SRP_InvestorStructure_Base{};