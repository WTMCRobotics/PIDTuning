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

	static double DEADBAND () {return .3;}
	static double MAX_SPEED() { return 1024;}
};
#endif /* SRC_GLOBALVARIABLES_H_ */
