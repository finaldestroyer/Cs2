/*
 * Railcar.hpp
 *
 *  Created on: Oct 31, 2018
 *      Author: student
 */

#ifndef RAILCAR_HPP_
#define RAILCAR_HPP_
#include <string>
#include "Vehicle.hpp"
using namespace std;

class Railcar {
public:
	string getID();
	string getManufact();
	int getCapacity();
	char getStatus();
	int getPWR();
	string getMotor();
	string getInspect();

	Railcar(string, string, int, char, int, string, string);

private:
	string ID;
	string manufact;
	int capacity;
	char status;
	int pwrOnTime;
	string motorType;
	string nextInspection;
};

#endif /* RAILCAR_HPP_ */
