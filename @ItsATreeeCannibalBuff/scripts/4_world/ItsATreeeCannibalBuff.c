modded class ItsATreeeCannibalBuff
{
  void ItsATreeeCannibalBuff()
  {
    GetRPCManager().AddRPC( "ItsATreeeCannibalBuff", "TestRPCFunction", this, SingleplayerExecutionType.Both );
    GetRPCManager().SendRPC( "ItsATreeeCannibalBuff", "TestRPCFunction", new Param1< string >( "Hello, World!" ) );
  };

  void TestRPCFunction( CallType type, ref ParamsReadContext ctx, ref PlayerIdentity sender, ref Object target )
  {
    Param1< string > data;
    if ( !ctx.Read( data ) ) return;

    if( type == CallType.Server )
    {
        Print( "Server function called!" );
    }
    else
    {
        Print( "Client function called!" );
    }
  };

  void OnKeyPress( int key )
  {
    switch ( key )
    {
      case KeyCode.KC_K:
      {
        GetRPCManager().SendRPC( "ItsATreeeCannibalBuff", "TestRPCFunction", new Param1< string >( "Hello, World!" ) );
        break;
      }
    }
  }
};
