class CfgPatches
{
	class SpacecatVanillaCars_Ada
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
	class Window;
	class Doors;
	class CarWheel;
	class SimulationModule;
	class DamageSystem;
	class DamageZones;
	class GlobalHealth;
	class Health;
	class Chassis;
	class Reflector_1_1;
	class Reflector_2_1;
	class WindowFront;
	class WindowBack;
	class Engine;
	class Roof;
	class Front;
	class Back;
	class Fender_1_1;
	class Fender_1_2;
	class Fender_2_1;
	class Fender_2_2;
	class FuelTank;
	class Axles;
	class Wheels;
	class Left;
	class Right;
	class Rear;

	class OffroadHatchback: CarScript
	{
		displayName="Lada Niva";
		descriptionShort="Lava Niva 4x4";
		attachments[] += {
            "Shoulder",
            "Back",
            "CanisterGasoline"
		};
		class GUIInventoryAttachmentsProps
		{
			class SpacecatBagGUI
			{
				name = "Attachments";
				description = "Attachments";
				icon = "back";
				attachmentSlots[] = { "Back", "Shoulder", "CanisterGasoline" };
			};
		};
		class SimulationModule: SimulationModule
		{
			class Steering
			{
				maxSteeringAngle=30;
				increaseSpeed[]={0,40,30,20,100,5};
				decreaseSpeed[]={0,80,60,40,90,20};
				centeringSpeed[]={0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime=0.89999998;
				defaultThrust=0.85000002;
				gentleThrust=0.69999999;
				turboCoef=4;
				gentleCoef=0.75;
			};
			class Brake
			{
				pressureBySpeed[]={0,0.75,10,0.64999998,20,0.5,40,0.40000001,60,0.43000001,80,0.44999999,100,0.5,120,0.64999998};
				gentleCoef=0.64999998;
				minPressure=0.2;
				reactionTime=0.30000001;
				driverless=0.1;
			};
			class Aerodynamics
			{
				frontalArea=2.1800001;
				dragCoefficient=0.56;
			};
			drive="DRIVE_AWD";
			class Engine
			{
				torqueCurve[]={650,0,750,80,1400,100,3400,140,5400,110,8000,0};
				inertia=0.11;
				frictionTorque=100;
				rollingFriction=0.5;
				viscousFriction=0.5;
				rpmIdle=800;
				rpmMin=900;
				rpmClutch=1400;
				rpmRedline=6000;
			};
			class Clutch
			{
				maxTorqueTransfer=240;
				uncoupleTime=0.30000001;
				coupleTime=0.44999999;
			};
			class Gearbox
			{
				type="GEARBOX_MANUAL";
				reverse=3.526;
				ratios[]={3.6670001,2.0999999,1.3609999,1};
			};
			class CentralDifferential
			{
				ratio=1.5;
				type="DIFFERENTIAL_LOCKED";
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxBrakeTorque=950;
					maxHandbrakeTorque=2500;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Differential
					{
						ratio=4.0999999;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2100;
						damping=7500;
						travelMaxUp=0.088200003;
						travelMaxDown=0.083300002;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_1";
							inventorySlot="NivaWheel_1_1";
						};
						class Right: Right
						{
							animDamper="damper_2_1";
							inventorySlot="NivaWheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxBrakeTorque=780;
					maxHandbrakeTorque=2500;
					wheelHubMass=5;
					wheelHubRadius=0.15000001;
					class Differential
					{
						ratio=4.0999999;
						type="DIFFERENTIAL_OPEN";
					};
					class Suspension
					{
						stiffness=40000;
						compression=2200;
						damping=7600;
						travelMaxUp=0.1587;
						travelMaxDown=0.1059;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper="damper_1_2";
							inventorySlot="NivaWheel_1_2";
						};
						class Right: Right
						{
							animDamper="damper_2_2";
							inventorySlot="NivaWheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,50}; //10,30
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3000; //1000
				};
			};
		};
	};
	
	class OffroadHatchback_Blue;
	class OffroadHatchback_Black: OffroadHatchback_Blue
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
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat",
			"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class DamageZones: DamageZones
			{
				class Chassis: Chassis
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
				class Roof: Roof
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Front: Front
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Back: Back
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
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
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
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
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
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
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
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
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class FuelTank: FuelTank
				{
					class Health: Health
					{
						RefTexsMats[]=
						{
							"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackDoors_Driver;
	class HatchbackDoors_Driver_Black: HatchbackDoors_Driver
	{
		hiddenSelectionsMaterials[]=
		{
			"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
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
							"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackDoors_CoDriver;
	class HatchbackDoors_CoDriver_Black: HatchbackDoors_CoDriver
	{
		hiddenSelectionsMaterials[]=
		{
			"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
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
							"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackHood;
	class HatchbackHood_Black: HatchbackHood
	{
		hiddenSelectionsMaterials[]=
		{
			"spacecat-vanilla-cars\ada\black\niva_hood.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"spacecat-vanilla-cars\ada\black\niva_hood.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"spacecat-vanilla-cars\ada\black\niva_hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"spacecat-vanilla-cars\ada\black\niva_hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"spacecat-vanilla-cars\ada\black\niva_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"spacecat-vanilla-cars\ada\black\niva_hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"spacecat-vanilla-cars\ada\black\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class HatchbackTrunk;
	class HatchbackTrunk_Black: HatchbackTrunk
	{
		hiddenSelectionsMaterials[]=
		{
			"spacecat-vanilla-cars\ada\black\niva_trunk.rvmat"
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
							"spacecat-vanilla-cars\ada\black\niva_trunk.rvmat"
						};
						healthLevels[]=
						{
							
							{
								1,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_trunk.rvmat"
								}
							},
							
							{
								0.69999999,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_trunk.rvmat"
								}
							},
							
							{
								0.5,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0.30000001,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_trunk_damage.rvmat"
								}
							},
							
							{
								0,
								
								{
									"spacecat-vanilla-cars\ada\black\niva_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};	
};
