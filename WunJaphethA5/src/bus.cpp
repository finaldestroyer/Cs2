//============================================================================
// Name        : bus.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;

class bus{
public:
    void setBusID(string x){
    	busID = x;
    	//cout<<busID<<endl;
    }
    void setManufact(string x){
    	manufact = x;
    }

    void setCapacity(int x){
    	capacity = x;
    }

    void setMilage(int x){
    	milage = x;
    }
    void setStatus(char x){
    	status = x;
    }
    string getBusID(){
    	string x;
		x = busID;
    	return x;
    }
    string getManufact(){
    	string x = manufact;
    	return x;
    }

    int getCapacity(){
    	int x = capacity;
    	return x;
    }
    int getMilage(){
    	int x = milage;
    	return x;
    }
    char getStatus(){
    	char x = status;
    	return x;
    }

    bus()
    {
    	busID = "";
    	manufact = "";
    	capacity = 0;
    	milage = 0;
    	status = 0;
    }

private:
    string busID;
    string manufact;
    int capacity;
    int milage;
    char status;
};

