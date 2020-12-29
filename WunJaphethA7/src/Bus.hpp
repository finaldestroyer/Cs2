/*
 * Bus.hpp
 *
 *  Created on: Oct 31, 2018
 *      Author: student
 */

#ifndef BUS_HPP_
#define BUS_HPP_
#include <string>
#include "Vehicle.hpp"
using namespace std;

class Bus {
public:

	string getID();
	string getManufact();
	int getCapacity();
	char getStatus();
	int getMilage();
	string getTire();
	string getFuel();

	Bus(string, string, int, char, int, string, string);

private:
	string ID;
	string manufact;
	int capacity;
	char status;
	int milage;
	string tireSize;
	string fuelType;


};

#endif /* BUS_HPP_ */
