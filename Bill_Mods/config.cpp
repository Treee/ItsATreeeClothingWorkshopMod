class CfgPatches
{
	class Bill_Mods
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Containers",
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class Bill_Mods
	{
		dir="Bill_Mods";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Bill_Mods";
		credits="";
		author="Nick M aka Bill Brett";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Bill_Mods/Scripts/4_World"
				};
			};
		};
	};
};
