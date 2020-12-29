/*
 * correctbus.cpp
 *
 *  Created on: Oct 24, 2018
 *      Author: student
 */
#include "correctbus.hpp"
#include <string>
using namespace std;
    void bus::setBusID(string x){
    	busID = x;
    	//cout<<busID<<endl;
    }
    void bus::setManufact(string x){
    	manufact = x;
    }

    void bus::setCapacity(int x){
    	capacity = x;
    }

    void bus::setMilage(int x){
    	milage = x;
    }
    void bus::setStatus(char x){
    	status = x;
    }
    string bus::getBusID(){
    	string x;
		x = busID;
    	return x;
    }
    string bus::getManufact(){
    	string x = manufact;
    	return x;
    }

    int bus::getCapacity(){
    	int x = capacity;
    	return x;
    }
    int bus::getMilage(){
    	int x = milage;
    	return x;
    }
    char bus::getStatus(){
    	char x = status;
    	return x;
    }

    bus::bus()
    {
    	busID = "";
    	manufact = "";
    	capacity = 0;
    	milage = 0;
    	status = 0;
    }






