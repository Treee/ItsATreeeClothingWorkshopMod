class SRP_PlayingCard_ColorBase extends Inventory_Base
{   
  override bool IsDeployable() 
  {
    return true;
  }        
	
	override void SetActions()
  {
    super.SetActions();
    
    AddAction(ActionTogglePlaceObject);
    AddAction(ActionPlaceObject);
  }
};

class SRP_PlayingCard_circle extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_plus extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_square extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_star extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_wave extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queenSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_aceSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queenclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_aceclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackdiamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queendiamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingdiamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_acediamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackheart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queenheart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingheart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_aceheart extends SRP_PlayingCard_ColorBase{};