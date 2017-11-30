/*
 * GlobalVariables.h
 *
 *  Created on: Oct 5, 2017
 *      Author: classroom
 */

#ifndef SRC_GLOBALVARIABLES_H_
#define SRC_GLOBALVARIABLES_H_

class GlobalVariables
{
public:
	static const int LEFT_MASTER = 1;
	static const int LEFT_SLAVE = 2;
	static const int RIGHT_SLAVE = 3;
	static const int RIGHT_MASTER = 4;

	static double DEADBAND;
	static double MAX_SPEED;
};

double GlobalVariables::DEADBAND = .3;
double GlobalVariables::MAX_SPEED = 1024;
#endif /* SRC_GLOBALVARIABLES_H_ */
