class Truck_01_Covered_Black extends Truck_01_Covered
{
	override void OnDebugSpawn()
	{
		SpawnUniversalParts();
		SpawnAdditionalItems();
		FillUpCarFluids();

		GetInventory().CreateInInventory("Truck_01_Wheel");
		GetInventory().CreateInInventory("Truck_01_Wheel");

		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");

		GetInventory().CreateInInventory("Truck_01_Door_1_1_Black");
		GetInventory().CreateInInventory("Truck_01_Door_2_1_Black");
		GetInventory().CreateInInventory("Truck_01_Hood_Black");

		//-----IN CAR CARGO
		GetInventory().CreateInInventory("Truck_01_Wheel");
		GetInventory().CreateInInventory("Truck_01_Wheel");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
	}
};
class Truck_01_Covered_Red extends Truck_01_Covered
{
	override void OnDebugSpawn()
	{
		SpawnUniversalParts();
		SpawnAdditionalItems();
		FillUpCarFluids();

		GetInventory().CreateInInventory("Truck_01_Wheel");
		GetInventory().CreateInInventory("Truck_01_Wheel");

		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");

		GetInventory().CreateInInventory("Truck_01_Door_1_1_Red");
		GetInventory().CreateInInventory("Truck_01_Door_2_1_Red");
		GetInventory().CreateInInventory("Truck_01_Hood_Red");

		//-----IN CAR CARGO
		GetInventory().CreateInInventory("Truck_01_Wheel");
		GetInventory().CreateInInventory("Truck_01_Wheel");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
		GetInventory().CreateInInventory("Truck_01_WheelDouble");
	}
};

class Hatchback_02_Nyan extends Hatchback_02
{
	override void OnDebugSpawn()
	{
		SpawnUniversalParts();
		SpawnAdditionalItems();
		FillUpCarFluids();

		GetInventory().CreateInInventory("Hatchback_02_Wheel");
		GetInventory().CreateInInventory("Hatchback_02_Wheel");
		GetInventory().CreateInInventory("Hatchback_02_Wheel");
		GetInventory().CreateInInventory("Hatchback_02_Wheel");

		GetInventory().CreateInInventory("Hatchback_02_Door_1_1_Nyan");
		GetInventory().CreateInInventory("Hatchback_02_Door_1_2_Nyan");
		GetInventory().CreateInInventory("Hatchback_02_Door_2_1_Nyan");
		GetInventory().CreateInInventory("Hatchback_02_Door_2_2_Nyan");
		GetInventory().CreateInInventory("Hatchback_02_Hood_Nyan");
		GetInventory().CreateInInventory("Hatchback_02_Trunk_Nyan");

		//-----IN CAR CARGO
		GetInventory().CreateInInventory("Hatchback_02_Wheel");
	}
};
