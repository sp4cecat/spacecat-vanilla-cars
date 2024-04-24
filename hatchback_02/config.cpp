class CfgPatches
{
	class OutlandVanillaCars_NyanCar
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
	class Hatchback_02_Door_1_1;
	class Hatchback_02_Door_1_1_Nyancar: Hatchback_02_Door_1_1
	{
		scope=2;
		displayName="Nyan Golf Driver's Door";
		descriptionShort="Nyan-Cat-themed Golf, driver-side door.";
		hiddenSelectionsMaterials[]=
		{
			"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_frontdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_frontdoor.rvmat"
						};
						healthLevels[]=
						{

							{
								1,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_frontdoor.rvmat"
								}
							},

							{
								0.69999999,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_frontdoor.rvmat"
								}
							},

							{
								0.5,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_frontdoor_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_frontdoor_damage.rvmat"
								}
							},

							{
								0,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_frontdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};

	class Hatchback_02_Door_2_1_Nyancar: Hatchback_02_Door_1_1_Nyancar
	{
		displayName="Nyan Golf Passenger Door";
		descriptionShort="Nyan Cat themed Golf, passenger-side door.";
		model="\DZ\vehicles\wheeled\Hatchback_02\proxy\Hatchback_02_Door_2_1.p3d";
		inventorySlot[]=
		{
			"Hatchback_02_Door_2_1"
		};
		rotationFlags=4;
	};

	class Hatchback_02_Door_1_2_Nyancar: Hatchback_02_Door_1_1_Nyancar
	{
		scope=2;
		displayName="Nyan Golf Rear-Left Door";
		descriptionShort="Nyan Cat themed Golf, rear-left door.";
		model="\DZ\vehicles\wheeled\Hatchback_02\proxy\Hatchback_02_Door_1_2.p3d";
		inventorySlot[]=
		{
			"Hatchback_02_Door_1_2"
		};
		rotationFlags=8;

		hiddenSelectionsMaterials[]=
		{
			"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_backdoor.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
			};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_backdoor.rvmat"
						};
						healthLevels[]=
						{

							{
								1,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_backdoor.rvmat"
								}
							},

							{
								0.69999999,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_backdoor.rvmat"
								}
							},

							{
								0.5,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_backdoor_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_backdoor_damage.rvmat"
								}
							},

							{
								0,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_backdoor_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};

	class Hatchback_02_Door_2_2_Nyancar: Hatchback_02_Door_1_2_Nyancar
	{
		displayName="Nyan Golf Rear-Right Door";
		descriptionShort="Nyan Cat themed Golf, rear-right door.";
		model="\DZ\vehicles\wheeled\Hatchback_02\proxy\Hatchback_02_Door_2_2.p3d";
		inventorySlot[]=
		{
			"Hatchback_02_Door_2_2"
		};
		rotationFlags=4;
	};

	class Hatchback_02_Hood;
	class Hatchback_02_Hood_Nyancar: Hatchback_02_Hood
	{
		scope=2;
		displayName="Nyan Golf Hood";
		descriptionShort="Racing stripe Nyan-cat Hood for a VW Golf";
		hiddenSelectionsMaterials[]=
		{
			"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_hood.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{

						{
							1,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_hood.rvmat"
							}
						},

						{
							0.69999999,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_hood.rvmat"
							}
						},

						{
							0.5,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_hood_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_hood_damage.rvmat"
							}
						},

						{
							0,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class Hatchback_02_Trunk;
	class Hatchback_02_Trunk_Nyancar: Hatchback_02_Trunk
	{
		scope=2;
		displayName="Nyan Golf Hatch";
		descriptionShort="Racing stripe Nyan-cat rear hatch for a VW Golf";
		hiddenSelectionsMaterials[]=
		{
			"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_trunk.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					RefTexsMats[]=
					{
						"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_trunk.rvmat"
					};
					healthLevels[]=
					{

						{
							1,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_trunk.rvmat"
							}
						},

						{
							0.69999999,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_trunk.rvmat"
							}
						},

						{
							0.5,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_trunk_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_trunk_damage.rvmat"
							}
						},

						{
							0,

							{
								"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_trunk_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class Hatchback_02_Nyancar: Hatchback_02
	{
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
		};
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
				{
					class Health: Health
					{
					};
				};
				class Front: Front
				{
					class Health: Health
					{
					};
				};
				class Back: Back
				{
					class Health: Health
					{
					};
				};
				class Reflector_1_1: Reflector_1_1
				{
					class Health: Health
					{
					};
				};
				class Reflector_2_1: Reflector_2_1
				{
					class Health: Health
					{
					};
				};
				class WindowFront: WindowFront
				{
					class Health: Health
					{
					};
				};
				class Engine: Engine
				{
					class Health: Health
					{
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
					};
				};
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{

							{
								1,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.5,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1: Fender_1_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{

							{
								1,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.5,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2: Fender_1_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{

							{
								1,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.5,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1: Fender_2_1
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{

							{
								1,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.5,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2: Fender_2_2
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"outland-vanilla-cars\hatchback_02\nyancar\data\hatchback_02_body.rvmat"
						};
						healthLevels[]=
						{

							{
								1,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body.rvmat"
								}
							},

							{
								0.5,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_damage.rvmat"
								}
							},

							{
								0,

								{
									"outland-vanilla-cars\hatchback_02\nyancar\data\Hatchback_02_Body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
	};
};