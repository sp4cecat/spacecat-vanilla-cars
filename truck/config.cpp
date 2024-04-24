class CfgPatches
{
	class OutlandTruck
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Wheeled"
		};
	};
};
class CfgVehicles
{
	class CarScript;
	class CarWheel;
	class CarDoor;

	class Truck_01_Base: CarScript
	{
		scope=0;
		class Cargo
		{
			allowOwnedCargoManipulation=1;
			openable=0;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4500;
					healthLevels[]=
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					displayName="$STR_CfgVehicleDmg_Chassis0";
					fatalInjuryCoef=-1;
					memoryPoints[]={};
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					class Health
					{
						hitpoints=9000;
						transferToGlobalCoef=0;
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Engine
				{
					displayName="$STR_CfgVehicleDmg_Engine0";
					fatalInjuryCoef=0.001;
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					class Health
					{
						hitpoints=4500;
						transferToGlobalCoef=1;
						healthLevels[]=
						{

							{
								1,
								{}
							},

							{
								0.69999999,
								{}
							},

							{
								0.5,
								{}
							},

							{
								0.30000001,
								{}
							},

							{
								0,
								{}
							}
						};
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Front
				{
					displayName="$STR_CfgVehicleDmg_Bumper0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front"
					};
					class Health
					{
						hitpoints=7500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"
								}
							},

							{
								0.69999999,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"
								}
							},

							{
								0.5,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"
								}
							},

							{
								0,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Fender_1_1",
						"Fender_2_1",
						"Engine"
					};
					transferToZonesCoefs[]={0.2,0.2,0.1};
					inventorySlots[]=
					{
						"Truck_01_Hood"
					};
					inventorySlotsCoefs[]={0.1};
				};
				class BackWood
				{
					displayName="$STR_CfgVehicleDmg_BackWood0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_wood"
					};
					componentNames[]=
					{
						"dmgZone_wood"
					};
					class Health
					{
						hitpoints=9000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super.rvmat"
								}
							},

							{
								0.69999999,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super.rvmat"
								}
							},

							{
								0.5,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super_damage.rvmat"
								}
							},

							{
								0,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_super_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class BackTarp
				{
					displayName="$STR_CfgVehicleDmg_BackTarp0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_tarp"
					};
					componentNames[]=
					{
						"dmgZone_tarp"
					};
					class Health
					{
						hitpoints=3000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\gear\camping\Data\tent_pristine_co.paa"
								}
							},

							{
								0.69999999,

								{
									"dz\gear\camping\data\tent_worn_co.paa"
								}
							},

							{
								0.5,

								{
									"dz\gear\camping\data\tent_damage_co.paa"
								}
							},

							{
								0.30000001,

								{
									"dz\gear\camping\data\tent_destruct_co.paa"
								}
							},

							{
								0,

								{
									"dz\gear\camping\data\tent_destruct_co.paa"
								}
							}
						};
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Roof
				{
					displayName="$STR_CfgVehicleDmg_Roof0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					componentNames[]=
					{
						"dmgZone_roof"
					};
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cab.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo.rvmat"
								}
							},

							{
								0.69999999,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cab.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo.rvmat"
								}
							},

							{
								0.5,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cab_damage.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cab_damage.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_damage.rvmat"
								}
							},

							{
								0,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cab_destruct.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\truck_01_cargo_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Fender_1_1
				{
					displayName="$STR_CfgVehicleDmg_Fender0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					class Health
					{
						hitpoints=2400;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"
								}
							},

							{
								0.69999999,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab.rvmat"
								}
							},

							{
								0.5,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_damage.rvmat"
								}
							},

							{
								0,

								{
									"dz\vehicles\wheeled\Truck_01\data\Truck_01_cab_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Engine",
						"Roof"
					};
					transferToZonesCoefs[]={0.1,0.050000001,0.15000001};
					inventorySlots[]=
					{
						"Truck_01_Hood"
					};
					inventorySlotsCoefs[]={0.1};
				};
				class Fender_2_1: Fender_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
				};
				class WindowLeft
				{
					displayName="$STR_CfgVehicleDmg_Window0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_windowLeft"
					};
					componentNames[]=
					{
						"dmgZone_windowLeft"
					};
					class Health
					{
						hitpoints=450;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_glass.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\glass_i.rvmat"
								}
							},

							{
								0.69999999,
								{}
							},

							{
								0.5,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_glass_destruct.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\glass_i_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_glass_destruct.rvmat",
									"dz\vehicles\wheeled\Truck_01\data\glass_i_destruct.rvmat"
								}
							},

							{
								0,
								"hidden"
							}
						};
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class WindowRight: WindowLeft
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_windowRight"
					};
					componentNames[]=
					{
						"dmgZone_windowRight"
					};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class WindowBack: WindowLeft
				{
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_windowBack"
					};
					componentNames[]=
					{
						"dmgZone_windowBack"
					};
					inventorySlots[]={};
				};
				class FuelTank
				{
					displayName="$STR_CfgVehicleDmg_FuelTank0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_fuelTank"
					};
					componentNames[]=
					{
						"dmgZone_fuelTank"
					};
					class Health
					{
						hitpoints=1200;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis.rvmat"
								}
							},

							{
								0.69999999,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis.rvmat"
								}
							},

							{
								0.5,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis_damage.rvmat"
								}
							},

							{
								0,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_chassis_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					inventorySlots[]={};
					inventorySlotsCoefs[]={};
				};
				class Reflector_1_1
				{
					displayName="$STR_CfgVehicleDmg_Reflector0";
					fatalInjuryCoef=-1;
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					class Health
					{
						hitpoints=150;
						transferToGlobalCoef=0;
						healthLevels[]=
						{

							{
								1,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_glass.rvmat"
								}
							},

							{
								0.69999999,
								{}
							},

							{
								0.5,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_glass_destruct.rvmat"
								}
							},

							{
								0.30000001,
								{}
							},

							{
								0,

								{
									"dz\vehicles\wheeled\Truck_01\data\truck_01_glass_destruct.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_1_1"
					};
					transferToZonesCoefs[]={1,1};
					inventorySlots[]=
					{
						"Reflector_1_1"
					};
					inventorySlotsCoefs[]={1};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					transferToZonesNames[]=
					{
						"Front",
						"Fender_2_1"
					};
					inventorySlots[]=
					{
						"Reflector_2_1"
					};
				};
			};
		};
	};
	class Truck_01_Covered: Truck_01_Base
	{};
	class Truck_01_Wheel: CarWheel
	{
		scope=2;
		displayName="Truck Wheel";
		descriptionShort="A wheel for an M3S off-road truck. Deep tread and specific profile provide grip in difficult terrains.";
	};
	class Truck_01_WheelDouble: Truck_01_Wheel
	{
		displayName="Truck Dual Wheel";
		descriptionShort="Dual wheel for an M3S off-road truck. Used to keep a heavily loaded truck steady while providing needed grip.";
	};
	class Truck_01_Door_1_1: CarDoor
	{
		scope=2;
		displayName="Truck Left Door";
		descriptionShort="Left door of an M3S off-road truck. Keeps the driver safe inside the vehicle.";
	};
	class Truck_01_Door_2_1: Truck_01_Door_1_1
	{
		displayName="Truck Right Door";
		descriptionShort="Right door of an M3S off-road truck. Keeps the co-driver safe inside the vehicle.";
	};
	class Truck_01_Hood: CarDoor
	{
		scope=2;
		displayName="Truck Hood";
		descriptionShort="Hood of an M3S off-road truck. Helps protect the engine against forces of nature or unexpected impacts.";
	};

	class Truck_01_Covered_Black: Truck_01_Covered
	{
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)",
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,co)"
		};
	};
	class Truck_01_Door_1_1_Black: Truck_01_Door_1_1
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.07,0.07,0.07,1.0,co)",
			"#(argb,8,8,3)color(0.07,0.07,0.07,1.0,co)"
		};
	};
	class Truck_01_Door_2_1_Black: Truck_01_Door_2_1
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.07,0.07,0.07,1.0,co)",
			"#(argb,8,8,3)color(0.07,0.07,0.07,1.0,co)"
		};
	};
	class Truck_01_Hood_Black: Truck_01_Hood
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.07,0.07,0.07,1.0,co)",
			"#(argb,8,8,3)color(0.07,0.07,0.07,1.0,co)"
		};
	};

	class Truck_01_Covered_Red: Truck_01_Covered
	{
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)"
		};
	};
	class Truck_01_Door_1_1_Red: Truck_01_Door_1_1
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)"
		};
	};
	class Truck_01_Door_2_1_Red: Truck_01_Door_2_1
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)"
		};
	};
	class Truck_01_Hood_Red: Truck_01_Hood
	{
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)",
			"#(argb,8,8,3)color(0.9,0.11,0.08,1.0,co)"
		};
	};
};
