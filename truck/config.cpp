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

	class Truck_01_Covered;

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
