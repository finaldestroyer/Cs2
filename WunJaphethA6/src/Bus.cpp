/*
 * Bus.cpp
 *
 *  Created on: Oct 29, 2018
 *      Author: student
 */

#include "Bus.hpp"
#include <string>
using namespace std;

void Bus::setBusID(string x){
	busID = x;
}
void Bus::setManufact(string x){
   	manufact = x;
}

void Bus::setCapacity(int x){
   	capacity = x;
}

void Bus::setMilage(int x){
   	milage = x;
}
void Bus::setStatus(char x){
   	status = x;
}
string Bus::getBusID(){
   	string x;
	x = busID;
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
int Bus::getMilage(){
   	int x = milage;
   	return x;
}
char Bus::getStatus(){
   	char x = status;
   	return x;
}

Bus::Bus() {
	// TODO Auto-generated constructor stub
	busID = "";
	manufact = "";
	capacity = 0;
	milage = 0;
	status = 0;
}
/*
Bus::Bus() {
	// TODO Auto-generated constructor stub
	busID = "";
	manufact = "";
	capacity = 0;
}*/
