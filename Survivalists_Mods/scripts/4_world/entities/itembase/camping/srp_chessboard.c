class SRP_ChessBoard_ColorBase extends ItemBase
{
  override void OnDebugSpawn()
	{
    GameInventory inventory = GetInventory();
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_PawnPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_RookPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_RookPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_KnightPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_KnightPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_BishopPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_BishopPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_QueenPrimary");
    inventory.CreateInInventory("SRP_ChessBoard_KingPrimary");

    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_PawnAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_RookAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_RookAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_KnightAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_KnightAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_BishopAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_BishopAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_QueenAlternate");
    inventory.CreateInInventory("SRP_ChessBoard_KingAlternate");
	}
};
class SRP_ChessBoard_Board extends SRP_ChessBoard_ColorBase{};

class SRP_ChessPiece_ColorBase extends ItemBase{};

class SRP_ChessBoard_PawnPrimary extends SRP_ChessPiece_ColorBase{};
class SRP_ChessBoard_RookPrimary extends SRP_ChessPiece_ColorBase{};
class SRP_ChessBoard_KnightPrimary extends SRP_ChessPiece_ColorBase{};
class SRP_ChessBoard_BishopPrimary extends SRP_ChessPiece_ColorBase{};
class SRP_ChessBoard_QueenPrimary extends SRP_ChessPiece_ColorBase{};
class SRP_ChessBoard_KingPrimary extends SRP_ChessPiece_ColorBase{};

class SRP_ChessPieceAlternate_ColorBase extends SRP_ChessPiece_ColorBase
{
  void SRP_ChessPieceAlternate_ColorBase()
  {
    SetOrientation("0 180 0");
  }
};
class SRP_ChessBoard_KnightAlternate extends SRP_ChessPieceAlternate_ColorBase{};
class SRP_ChessBoard_PawnAlternate extends SRP_ChessPieceAlternate_ColorBase{};
class SRP_ChessBoard_RookAlternate extends SRP_ChessPieceAlternate_ColorBase{};
class SRP_ChessBoard_BishopAlternate extends SRP_ChessPieceAlternate_ColorBase{};
class SRP_ChessBoard_QueenAlternate extends SRP_ChessPieceAlternate_ColorBase{};
class SRP_ChessBoard_KingAlternate extends SRP_ChessPieceAlternate_ColorBase{};