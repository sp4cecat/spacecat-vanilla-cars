class CfgPatches
{
	class OutlandVanillaPatches_Vehicles_Parts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Vehicles_Parts"
		};
	};
};
class CfgVehicles
{
	class Bottle_Base;
	class Inventory_Base;

	class CanisterGasoline: Bottle_Base
	{
		scope=2;
		repairableWithKits[]={8,10};
		repairCosts[]={50,25};
    };

	class CarRadiator: Inventory_Base
	{
		scope=2;
		repairableWithKits[]={8,10};
		repairCosts[]={25,25};
	};
};
