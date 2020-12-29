/*
 * Vehicle.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: student
 */

#include "Vehicle.hpp"
#include "Bus.hpp"
#include "Railcar.hpp"
#include <string>
using namespace std;

Vehicle::Vehicle(string a, string b, int c, char d) {
	// TODO Auto-generated constructor stub
	vehicleID = a;
	manufacturer = b;
	capacity = c;
	status = d;
}

