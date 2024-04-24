modded class ZombieBase
{
	override bool FightAttackLogic(int pCurrentCommandID, DayZInfectedInputController pInputController, float pDt)
	{
		// always update target - it can be destroyed
		m_ActualTarget = pInputController.GetTargetEntity();

		//! do not attack players in vehicle - hotfix
		PlayerBase pb = PlayerBase.Cast(m_ActualTarget);

		if ( pb && pb.GetCommand_Vehicle() )
		{
	        HumanCommandVehicle vehicleCommander = pb.GetCommand_Vehicle();

            if (vehicleCommander)
            {
                Transport transport = vehicleCommander.GetTransport();

                if (transport)
                {

                    int carCrewIndex = transport.CrewMemberIndex(pb);

                    CarScript theCar = CarScript.Cast(transport);

                    if ( theCar.GetCarDoorsState(theCar.GetDoorInvSlotNameFromSeatPos(carCrewIndex)) != CarDoorState.DOORS_CLOSED )
                    {

                        if ( m_AttackCooldownTime > 0 )
                        {
                            m_AttackCooldownTime -= pDt * GameConstants.AI_ATTACKSPEED;
                            return false;
                        }

                        if ( m_ActualTarget == NULL )
                            return false;

                        vector targetPos = m_ActualTarget.GetPosition();
                        float targetDist = vector.Distance(targetPos, this.GetPosition());
                        int pitch = GetAttackPitch(m_ActualTarget);

                        if ( !CanAttackToPosition(targetPos) )
                            return false;

                        if (m_ActualAttackType)
                        {
                            Object target = DayZPlayerUtils.GetMeleeTarget(this.GetPosition(), this.GetDirection(), TARGET_CONE_ANGLE_FIGHT, m_ActualAttackType.m_Distance, -1.0, 2.0, this, m_TargetableObjects, m_AllTargetObjects);

                            if (m_AllTargetObjects.Count() > 0 && m_AllTargetObjects[0] != m_ActualTarget)
                            {
                                m_AllTargetObjects.Clear();
                                return false;
                            }

                            StartCommand_Attack(m_ActualTarget, m_ActualAttackType.m_Type, m_ActualAttackType.m_Subtype);
                            m_AttackCooldownTime = m_ActualAttackType.m_Cooldown;
                            return true;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
            }
	        return false;
		}
		else
	    {
			return super.FightAttackLogic(pCurrentCommandID, pInputController, pDt);
	    }
	};
};
