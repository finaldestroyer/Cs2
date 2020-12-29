/*
 * BusManager.hpp
 *
 *  Created on: Oct 29, 2018
 *      Author: student
 */

#ifndef BUSMANAGER_HPP_
#define BUSMANAGER_HPP_
#include "Bus.hpp"
#include <string>
using namespace std;

class BusManager {
private:

public:
	string SuserInput = "";
	int IuserInput = 0;
	char CuserInput;
	Bus bus1;
	Bus *listbus = new Bus[50];
	int track = 0;
	void Phase1();
	void Phase2();


	BusManager();


};

#endif /* BUSMANAGER_HPP_ */
