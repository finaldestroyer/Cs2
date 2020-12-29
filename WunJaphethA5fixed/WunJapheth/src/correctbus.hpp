/*
 * correctbus.hpp
 *
 *  Created on: Oct 24, 2018
 *      Author: student
 */
#ifndef h
#define h
#include <string>
using namespace std;
class bus{
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
    bus();

};
#endif
