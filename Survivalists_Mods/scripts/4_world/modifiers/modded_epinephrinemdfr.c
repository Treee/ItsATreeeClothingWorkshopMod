modded class EpinephrineMdfr
{
	override void OnActivate(PlayerBase player)
	{
		super.OnActivate(player);
    player.SetTirednessSprintOverride(true);
    player.SetSynchDirty();
	}
	
	override void OnDeactivate(PlayerBase player)
	{
		super.OnDeactivate(player);
    player.SetTirednessSprintOverride(false);
    player.SetSynchDirty();
	}	
};