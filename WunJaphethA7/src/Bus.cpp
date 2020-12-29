/*
 * Bus.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: student
 */

#include "Bus.hpp"
#include <string>
#include "Vehicle.hpp"
using namespace std;

string Bus::getID(){
   	string x;
	x = ID;
   	return x;
}
string Bus::getManufact(){
   	string x = manufact;
   	return x;
}
int Bus::getCapacity(){
   	int x = capacity;
   	return x;
}
char Bus::getStatus(){
   	char x = status;
   	return x;
}
int Bus::getMilage(){
   	int x = milage;
   	return x;
}
string Bus::getTire(){
	string x = tireSize;
	return x;
}
string Bus::getFuel(){
	string x = fuelType;
	return x;
}


Bus::Bus(string a, string b, int c, char d, int e, string f, string g) {
	// TODO Auto-generated constructor stub
	ID = a;
	manufact = b;
	capacity = c;
	status = d;
	milage = e;
	tireSize = f;
	fuelType = g;

}



