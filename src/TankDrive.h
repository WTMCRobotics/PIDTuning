/*
 * TankDrive.h
 *
 *  Created on: Oct 5, 2017
 *      Author: classroom
 */

#ifndef SRC_TANKDRIVE_H_
#define SRC_TANKDRIVE_H_

#include <CANTalon.h>
#include <XboxController.h>
#include <math.h>
#include <GlobalVariables.h>
#include <CameraServer.h>

class TankDrive
{

	public:
		TankDrive();
		void Stop();
		void Drive(double left, double right);
		double getLeftEncoder() { return leftMaster.GetEncPosition();}
		double getLeftPosition() {return leftMaster.GetPosition();}
		double getLeftError() {return leftMaster.GetClosedLoopError();}
		double getRightEncoder() { return rightMaster.GetEncPosition();}
		double getRightPosition() {return rightMaster.GetPosition();}
		double getRightError() {return rightMaster.GetClosedLoopError();}
	private:
		CANTalon leftMaster {GlobalVariables::LEFT_MASTER};
		CANTalon leftSlave {GlobalVariables::LEFT_SLAVE};
		CANTalon rightMaster {GlobalVariables::RIGHT_MASTER};
		CANTalon rightSlave {GlobalVariables::RIGHT_SLAVE};

		double left2;
		double right2;
};

#endif /* SRC_TANKDRIVE_H_ */
