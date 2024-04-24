class CfgPatches
{
	class SpacecatVanillaCars
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Vehicles_Wheeled",
			"DZ_Surfaces"
		};
	};
};
class CfgMods
{
	class SpacecatVanillaCars
	{
		dir="SpacecatVanillaCars";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="SpacecatVanillaCars";
		credits="SpaceCat";
		author="SpaceCat";
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
					"spacecat-vanilla-cars/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	// Vanilla
	class CarScript;
	class CarWheel;
	class CarDoor;

	class OffroadHatchback: CarScript
	{
		displayName="Lada Niva";
		descriptionShort="Lava Niva 4x4";
		attachments[]+=
		{
            "Shoulder",
            "Back",
            "CanisterGasoline"
		};
		class GUIInventoryAttachmentsProps
		{
			class OutlandBagGUI
			{
				name="Attachments";
				description="Attachments";
				icon="back";
				attachmentSlots[]=
				{
					"Back",
					"Shoulder",
					"CanisterGasoline"
				};
			};
		};
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
					hitpoints=3000; //1000
				};
			};
		};
	};
    class HatchbackWheel: CarWheel
    {
		displayName="Lada Niva Wheel";
        friction=0.9; //0.95999998
    };
    class HatchbackDoors_Driver: CarDoor
    {
        scope=2;
		displayName="Lada Niva 4x4 Left Door";
		descriptionShort="Left door of the Lada Niva 4x4 off-road. Keeps the driver safe inside the vehicle.";
    };
	class HatchbackDoors_CoDriver: HatchbackDoors_Driver
	{
		displayName="Lada Niva 4x4 Right Door";
		descriptionShort="Right door of the Lada Niva 4x4 off-road. Keeps the co-driver safe inside the vehicle.";
	};
	class HatchbackHood: CarDoor
	{
		scope=2;
		displayName="Lada Niva 4x4 Hood";
		descriptionShort="Hood of the Lada Niva 4x4 off-road. Helps protect the engine and other sensitive car parts.";
	};
	class HatchbackTrunk: CarDoor
	{
		scope=2;
		displayName="Lada Niva 4x4 Rear Door";
		descriptionShort="Trunk door of the Lada Niva 4x4 offroad. Used for keeping trunk contents inside car.";
	};

	class CivilianSedan : CarScript
	{
		displayName="Olha Sedan";
		descriptionShort="Civilian Sedan.";
		attachments[]+=
		{
            "Shoulder",
            "Back"
		};
		class GUIInventoryAttachmentsProps
		{
			class OutlandBagGUI
			{
				name="Attachments";
				description="Attachments";
				icon="back";
				attachmentSlots[]=
				{
					"Back",
					"Shoulder"
				};
			};
		};
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
					hitpoints=3000; //1000
				};
			};
		};
	};
	class CivSedanWheel: CarWheel
	{
		displayName="Sedan Wheel";
		descriptionShort="A wheel of the Olha sedan. Tire pattern is designed for high performance on common road surfaces.";
		friction=0.9; //0.95999998
	};
	class CivSedanDoors_Driver: CarDoor
	{
		scope=2;
		displayName="Olha Sedan Front Left Door";
		descriptionShort="Front left door of the Olha sedan. Keeps the driver safe inside the vehicle.";
	};
	class CivSedanDoors_CoDriver: CivSedanDoors_Driver
	{
		displayName="Olha Sedan Front Right Door";
		descriptionShort="Front right door of the Olha sedan. Keeps the co-driver safe inside the vehicle.";
	};

	class CivSedanDoors_BackLeft: CivSedanDoors_Driver
	{
		displayName="Olha Sedan Back Left Door";
		descriptionShort="Back left door of the Olha sedan. Stops passengers from leaping out.";
	};
	class CivSedanDoors_BackRight: CivSedanDoors_Driver
	{
		displayName="Olha Sedan Right Left Door";
		descriptionShort="Back right door of the Olha sedan. Stops passengers from leaping out.";
	};
	class CivSedanHood: CarDoor
	{
		scope=2;
		displayName="Olha Sedan Hood";
		descriptionShort="Hood of the Olha sedan. Helps protect the engine and other sensitive car parts.";
	};
	class CivSedanTrunk: CarDoor
	{
		scope=2;
		displayName="Olha Sedan Trunk";
		descriptionShort="Trunk lid of the Olha sedan. Used for keeping trunk contents inside.";
	};

	class Hatchback_02 : CarScript
	{
		displayName="VW Golf";
		descriptionShort="Volkswagen Golf";
		attachments[]+=
		{
            "Shoulder",
            "Back"
		};
		class GUIInventoryAttachmentsProps
		{
			class OutlandBagGUI
			{
				name="Attachments";
				description="Attachments";
				icon="back";
				attachmentSlots[]=
				{
					"Back",
					"Shoulder"
				};
			};
		};
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
					hitpoints=3000; //1000
				};
			};
		};
	};
	class Hatchback_02_Wheel: CarWheel
	{
		scope=2;
		displayName="VW Golf Wheel";
		descriptionShort="Wheel for a VW Golf hatchback. Tire pattern is designed for high performance on normal road surfaces.";
		friction=0.9; //0.95999998
	};
	class Hatchback_02_Door_1_1: CarDoor
	{
		scope=2;
		displayName="VW Golf Front Left Door";
		descriptionShort="Front left door for a VW Golf. Keeps the driver in the car going around corners.";
	};
	class Hatchback_02_Door_2_1: Hatchback_02_Door_1_1
	{
		scope=2;
		displayName="VW Golf Front Right Door";
		descriptionShort="Front right door for a VW Golf. Keeps the co-driver in the car going around corners.";
	};
	class Hatchback_02_Door_1_2: Hatchback_02_Door_1_1
	{
		displayName="VW Golf Rear Left Door";
		descriptionShort="Rear left door for a VW Golf. Keeps passengers from jumping out while moving.";
	};
	class Hatchback_02_Door_2_2: Hatchback_02_Door_1_2
	{
		displayName="VW Golf Rear Right Door";
		descriptionShort="Rear right door for a VW Golf. Keeps passengers from jumping out while moving.";
	};
	class Hatchback_02_Hood: Hatchback_02_Door_1_1
	{
		displayName="VW Golf Hood";
		descriptionShort="Hood for a VW Golf. Helps protect the engine and other sensitive car parts.";
	};
	class Hatchback_02_Trunk: Hatchback_02_Door_1_1
	{
		displayName="VW Golf Rear Hatch";
		descriptionShort="Trunk door for a VW Golf hatchback. Used for keeping trunk contents enclosed.";
	};

	class Sedan_02 : CarScript
	{
		displayName="Skoda";
		descriptionShort="Skoda civilian sedan.";
		attachments[]+=
		{
            "Shoulder",
            "Back"
		};
		class GUIInventoryAttachmentsProps
		{
			class OutlandBagGUI
			{
				name="Attachments";
				description="Attachments";
				icon="back";
				attachmentSlots[]=
				{
					"Back",
					"Shoulder"
				};
			};
		};
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
					hitpoints=3000; //1000
				};
			};
		};
	};
	class Sedan_02_Wheel: CarWheel
	{
		scope=2;
		displayName="Skoda Wheel";
		descriptionShort="Wheel for a Skoda sedan. The tire pattern isn't really designed for off-road performance.";
	};
	class Sedan_02_Door_1_1: CarDoor
	{
		scope=2;
		displayName="Skoda Front Left Door";
		descriptionShort="Front left door for a Skoda sedan. Keeps the driver from falling out.";
	};
	class Sedan_02_Door_2_1: Sedan_02_Door_1_1
	{
		scope=2;
		displayName="Skoda Front Right Door";
		descriptionShort="Front right door for a Skoda sedan. Keeps the co-driver from falling out.";
	};
	class Sedan_02_Door_1_2: Sedan_02_Door_1_1
	{
		displayName="Skoda Rear Left Door";
		descriptionShort="Rear left door for a Skoda sedan. Keeps passengers from falling out.";
	};
	class Sedan_02_Door_2_2: Sedan_02_Door_1_1
	{
		displayName="Skoda Rear Right Door";
		descriptionShort="Rear right door for a Skoda sedan. Keeps passengers from falling out.";
	};
	class Sedan_02_Hood: CarDoor
	{
		scope=2;
		displayName="Skoda Hood";
		descriptionShort="Hood for a Skoda sedan. Used for keeping hood contents safe.";
	};
	class Sedan_02_Trunk: CarDoor
	{
		scope=2;
		displayName="Skoda Trunk";
		descriptionShort="Trunk door of the Skoda sedan - helps to protect the engine and other sensitive car parts.";
	};

	class Offroad_02: CarScript
	{
		scope=2;
		displayName="Humvee";
		attachments[]+=
		{
            "Shoulder",
            "Back",
            "Melee",
            "CanisterGasoline",
            "AmmoBox"
		};
		class GUIInventoryAttachmentsProps
		{
			class OutlandBagGUI
			{
				name="Attachments";
				description="Attachments";
				icon="back";
				attachmentSlots[]=
				{
					"Back",
					"Shoulder",
					"Melee",
					"CanisterGasoline",
					"AmmoBox"
				};
			};
		};
		class Cargo
		{
			allowOwnedCargoManipulation=1;
			openable=0;
		};
    };
    class Offroad_02_Wheel: CarWheel
    {
		displayName="Humvee Wheel";
		descriptionShort="Humvee wheel. The tire pattern suggests that it's mainly designed for off-road.";
    };
	class Offroad_02_Door_1_1: CarDoor
	{
		scope=2;
		displayName="Humvee Front Left Door";
		descriptionShort="Humvee Front-Left Door. Keeps the driver safe from dust and projectiles.";
	};
	class Offroad_02_Door_2_1: Offroad_02_Door_1_1
	{
		displayName="Humvee Front Right Door";
		descriptionShort="Humvee Front-Right Door. Keeps the driver safe from dust and projectiles.";
    };
	class Offroad_02_Door_1_2: Offroad_02_Door_1_1
	{
		displayName="Humvee Rear Left Door";
		descriptionShort="Humvee Rear-Left Door. Keeps passengers from falling out.";
	};
	class Offroad_02_Door_2_2: Offroad_02_Door_1_1
	{
		displayName="Humvee Rear Right Door";
		descriptionShort="Humvee Rear-Right Door. Keeps passengers from falling out.";
	};
	class Offroad_02_Hood: CarDoor
	{
		scope=2;
		displayName="Humvee Hood";
		descriptionShort="Hood for a Humvee. Helps protect the engine and other sensitive car parts.";
	};
	class Offroad_02_Trunk: CarDoor
	{
		scope=2;
		displayName="Humvee Trunk";
		descriptionShort="Trunk door for a Humvee. Keeps cargo from getting out and helps stop bullets from getting in.";
	};
};

class CfgVehicleSurfaces
{
	class Asphalt
	{
		frictionOffroad=1.2;
		frictionSlick=1;
		rollResistance=1;
		rollDrag=0.1;
	};
	class Dirt
	{
		noiseSteer=0.0089999996;
		noiseFrequency=0.31;
		roughness=0.02;
		frictionSlick=1;
		rollResistance=1;
		rollDrag=0.1;
	};
	class Grass
	{
		noiseSteer=0.02;
		noiseFrequency=0.64999998;
		roughness=0.029999999;
		frictionSlick=1;
		rollResistance=1;
		rollDrag=0.1;
	};
	class Forest
	{
		noiseSteer=0.039999999;
		noiseFrequency=1.65;
		roughness=0.090000004;
		frictionSlick=1;
		rollResistance=1;
		rollDrag=0.1;
	};
	class Gravel
	{
		noiseSteer=0.07;
		noiseFrequency=2;
		roughness=0.039999999;
		frictionSlick=1;
		rollResistance=1;
		rollDrag=70;
	};
};
class CfgSurfaces
{
	class DZ_SurfacesInt;
	class DZ_SurfacesExt;
	class cp_concrete1: DZ_SurfacesExt
	{
		files="cp_concrete1*";
		deflection=0.1;
		friction=1;
		restitution=1;
		soundEnviron="road";
		soundHit="hard_ground";
		character="cp_concrete_grass";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class cp_concrete2: DZ_SurfacesExt
	{
		files="cp_concrete2*";
		deflection=0.1;
		friction=1;
		restitution=1;
		soundEnviron="road";
		soundHit="hard_ground";
		character="empty";
		footDamage=0.117;
		audibility=0.80000001;
		impact="Hit_Concrete";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class cp_dirt: DZ_SurfacesExt
	{
		files="cp_dirt*";
		deflection=0.1;
		friction=1;
		restitution=1;
		soundEnviron="gravel";
		soundHit="soft_ground";
		character="cp_dirt_grass";
		footDamage=0.057999998;
		audibility=0.69999999;
		impact="Hit_Dirt";
		isDigable=1;
		isFertile=1;
		vpSurface="Asphalt";
	};
	class cp_broadleaf_dense1: DZ_SurfacesExt
	{
		files="cp_broadleaf_dense1*";
		deflection=0.1;
		friction=1;
		restitution=1;
		soundEnviron="forest";
		soundHit="soft_ground";
		character="cp_broadleaf_dense1";
		footDamage=0.057999998;
		audibility=0.69999999;
		class Visible
		{
			prone=0.30000001;
			kneel=0.5;
			stand=0.60000002;
		};
		impact="Hit_Foliage";
		isDigable=1;
		isFertile=1;
		windModifier=0.75;
		vpSurface="Asphalt";
	};
	class cp_broadleaf_dense2: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class cp_broadleaf_sparse1: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class cp_broadleaf_sparse2: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class cp_conifer_common1: DZ_SurfacesExt
	{
		files="cp_conifer_common1*";
		deflection=0.1;
		friction=1;
		restitution=1;
		soundEnviron="forest";
		soundHit="soft_ground";
		character="cp_conifer_common1";
		footDamage=0.057999998;
		audibility=0.60000002;
		class Visible
		{
			prone=0.1;
			kneel=0.30000001;
			stand=0.5;
		};
		impact="Hit_Foliage";
		isDigable=1;
		isFertile=1;
		windModifier=0.75;
		vpSurface="Asphalt";
	};
	class cp_conifer_common2: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class cp_conifer_moss2: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class cp_grass: DZ_SurfacesExt
	{
		files="cp_grass_ca*";
		deflection=0.1;
		friction=1;
		restitution=1;
		soundEnviron="grass";
		soundHit="soft_ground";
		character="cp_grass";
		audibility=0.40000001;
		footDamage=0.023;
		class Visible
		{
			prone=0.2;
			kneel=0.60000002;
			stand=0.80000001;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=1;
		vpSurface="Asphalt";
	};
	class cp_grass_tall: DZ_SurfacesExt
	{
		files="cp_grass_tall*";
		deflection=0.1;
		friction=1;
		restitution=1;
		soundEnviron="grass";
		soundHit="soft_ground";
		character="cp_grass_tall";
		audibility=0.5;
		footDamage=0.023;
		class Visible
		{
			prone=0.1;
			kneel=0.40000001;
			stand=0.75;
		};
		impact="Hit_Grass";
		isDigable=1;
		isFertile=1;
		vpSurface="Asphalt";
	};
	class cp_gravel: DZ_SurfacesExt
	{
		files="cp_gravel*";
		deflection=0.40000001;
		friction=1;
		restitution=1;
		soundEnviron="gravel";
		soundHit="hard_ground";
		character="Empty";
		audibility=1.2;
		footDamage=0.234;
		impact="Hit_Gravel";
		isDigable=1;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class cp_rock: DZ_SurfacesExt
	{
		files="cp_rock*";
		deflection=0.89999998;
		friction=1;
		restitution=1;
		soundEnviron="rock";
		soundHit="hard_ground";
		character="Empty";
		audibility=1;
		footDamage=0.50199997;
		impact="Hit_Gravel";
		isDigable=0;
		isFertile=0;
		vpSurface="Asphalt";
	};
	class en_grass1: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_grass2: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_flowers1: en_grass2
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_flowers2: en_grass2
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_flowers3: en_grass2
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_forestcon: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_forestdec: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_soil: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_tarmac: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_tarmacold: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_stubble: DZ_SurfacesExt
	{
		friction=1;
		restitution=1;
		vpSurface="Asphalt";
	};
	class en_stones: DZ_SurfacesExt
	{
		vpSurface="Asphalt";
	};
};
