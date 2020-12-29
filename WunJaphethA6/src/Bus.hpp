/*
 * Bus.hpp
 *
 *  Created on: Oct 29, 2018
 *      Author: student
 */

#ifndef BUS_HPP_
#define BUS_HPP_
#include <string>
using namespace std;

class Bus {
private:
	string busID;
	string manufact;
	int capacity;
	int milage;
	char status;
public:
	void setBusID(string);
	void setManufact(string);
	void setCapacity(int);
	void setMilage(int);
	void setStatus(char);

	string getBusID();
	string getManufact();
	int getCapacity();
	int getMilage();
	char getStatus();

	Bus();
	//newBus();
};

#endif /* BUS_HPP_ */
