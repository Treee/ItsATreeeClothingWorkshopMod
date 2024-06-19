//========================================================== ARMBAND
class SRP_EventArmband extends Armband_ColorBase
{
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        Delete();
    }
    override bool IsEventArmband()
    {
        return true;
    }
};
class Armband_Event_Generic extends SRP_EventArmband{};
class Armband_Event_Espen extends SRP_EventArmband{};
class Armband_Event_Stag extends SRP_EventArmband{};
//========================================================== DOUBLE ARMBAND
class SRP_EventDoubleArmband extends SRP_DoubleArmband_ColorBase
{
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        Delete();
    }
    override bool IsEventArmband()
    {
        return true;
    }
};
class SRP_DoubleArmband_Event_Generic extends SRP_EventDoubleArmband{};
class SRP_DoubleArmband_Event_Espen extends SRP_EventDoubleArmband{};
class SRP_DoubleArmband_Event_Stag extends SRP_EventDoubleArmband{};
//========================================================== LEATHER ARMBAND
class SRP_ArmbandLeatherEvent_Base extends Clothing
{
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        Delete();
    }
    override bool IsEventArmband()
    {
        return true;
    }
};
class SRP_Armband_Event_Generic extends SRP_ArmbandLeatherEvent_Base{};
class SRP_Armband_Event_Espen extends SRP_ArmbandLeatherEvent_Base{};
class SRP_Armband_Event_Stag extends SRP_ArmbandLeatherEvent_Base{};
//========================================================== FLAG
class Flag_Event_Generic extends Flag_Base
{
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        Delete();
    }
};
class Flag_Event_Espen extends Flag_Base
{
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        Delete();
    }
};
//========================================================== PATCH - FLAG
class SRP_PatchFlag_Event_Generic extends SRP_PatchFlag_ColorBase
{
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        Delete();
    }
};
class SRP_PatchFlag_Event_Espen extends SRP_PatchFlag_ColorBase
{
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        Delete();
    }
};
