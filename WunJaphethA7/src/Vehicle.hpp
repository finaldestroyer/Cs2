/*
 * Vehicle.hpp
 *
 *  Created on: Oct 31, 2018
 *      Author: student
 */

#ifndef VEHICLE_HPP_
#define VEHICLE_HPP_
#include "Bus.hpp"
#include "Railcar.hpp"
#include <string>
using namespace std;

class Vehicle {
public:

	Vehicle(string, string, int, char);

private:
	string vehicleID;
	string manufacturer;
	int capacity;
	char status;
};

#endif /* VEHICLE_HPP_ */
