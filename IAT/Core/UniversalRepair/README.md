# Universal Repair

This `Addon` extends the vanilla repair plugin system to include repair tools that can serve as a repair kit for multiple types. Currently vanilla DayZ only allows for one repair kit type assigned to an item. By adding this mod you enable your server to add items with multiple repair kit types or utlize the universal kit provided in the mod. Another feature is the repair costs **DO NOT** need to be changed since the logic is pulling from vanilla DayZ. This means your universal repair tool will be `balanced` to consume the repair cost that which the recipe calls AND work with other repair mods on your server.

# How Do I Use?

- Subscribe to the addon via the Steam Workshop

- Spawn `IAT_UniversalRepair_Epoxy` and repair an object.

# Advanced Usage (Optional)

For advanced users you can add the config property `repairKitType` (which is normally a single int `repairKitType=1;`) to any item as an array `repairKitType[]={1,3,5,7};`. This will connect to the `PluginRepairing` system automagically.
