modded class PlayerBase
{
    override bool CanBeTargetedByAI(EntityAI ai)
    {
        if (IsInVehicle())
        {
            if (GetCommand_Vehicle())
            {
	            HumanCommandVehicle vehicleCommander = GetCommand_Vehicle();

	            if (vehicleCommander)
	            {
	                Transport transport = vehicleCommander.GetTransport();

	                if (transport)
	                {
	                    if (transport.IsInherited(rag_atv_base))
	                    {
	                        return true;
	                    }

	                    CarScript theCar = CarScript.Cast(transport);

	                    int carCrewIndex = theCar.CrewMemberIndex(this);

                        if (theCar.GetCarDoorsState(theCar.GetDoorInvSlotNameFromSeatPos(carCrewIndex)) != CarDoorState.DOORS_CLOSED)
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
	                }
	            }
            }
        }
		return super.CanBeTargetedByAI(ai);
    };
};
