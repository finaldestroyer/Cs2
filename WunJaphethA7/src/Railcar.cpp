/*
 * Railcar.cpp
 *
 *  Created on: Oct 31, 2018
 *      Author: student
 */

#include "Railcar.hpp"
#include <string>
#include "Vehicle.hpp"
using namespace std;

string Railcar::getID(){
   	string x;
	x = ID;
   	return x;
}
string Railcar::getManufact(){
   	string x = manufact;
   	return x;
}
int Railcar::getCapacity(){
   	int x = capacity;
   	return x;
}
char Railcar::getStatus(){
   	char x = status;
   	return x;
}
int Railcar::getPWR(){
   	int x = pwrOnTime;
   	return x;
}
string Railcar::getMotor(){
	string x = motorType;
	return x;
}
string Railcar::getInspect(){
	string x = nextInspection;
	return x;
}

Railcar::Railcar(string a, string b, int c, char d, int e, string f, string g) {
	// TODO Auto-generated constructor stub
	ID = a;
	manufact = b;
	capacity = c;
	status = d;
	pwrOnTime = e;
	motorType = f;
	nextInspection = g;
}

