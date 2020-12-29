/*
 * BusManager.cpp
 *
 *  Created on: Oct 29, 2018
 *      Author: student
 */

#include "BusManager.hpp"
#include "Bus.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include "Bus.hpp"

using namespace std;
void BusManager::Phase1(){

	///////////////////////////////////// PHASE 1 ///////////////////////////////////////////////
	bool phase = true;
	while(phase == true ){
	track++;
	cout << "Enter bus ID: (only five characters please)"<< endl;
	cin>>SuserInput;
	if(SuserInput == "99999"){																//if User input is 99999 the phase 1 ends
		cout<<"Thank you end of input phase"<<endl;
		phase = false;
		break;
	}
	bus1.setBusID(SuserInput);																//Sets Bus ID
	bus1.getBusID();
	cout<<"Enter manufacturer: "<<endl;														//Sets manufacturer
	cin>>SuserInput;
	bus1.setManufact(SuserInput);
	cout<<"Enter the mileage: "<<endl;														//Sets Milage
	cin>>IuserInput;
	while(IuserInput < 0 ){
		cout<<"Please input a valid number."<<endl;
		cin>>IuserInput;
	}
	bus1.setMilage(IuserInput);
	cout<<"Enter the capacity"<<endl;														//Sets Capacity
	cin>>IuserInput;
	while(IuserInput <0){
		cout<<"Please input a valid number."<<endl;
		cin>>IuserInput;
	}
	bus1.setCapacity(IuserInput);
	cout<<"Enter the status: (a = active, m = maintenance, r = removed from service) "<<endl;
	cin>>CuserInput;
	while(!(CuserInput == 'a' || CuserInput == 'm'|| CuserInput == 'r')){
		cout<<"Please enter valid status"<<endl;
		cin>>CuserInput;
	}
	listbus[track] = bus1;
	if(track == 50){
		cout<<"End of Input Phase"<<endl;
		break;
	}
	}
	cout<<endl;
}

void BusManager::Phase2(){

	///////////////////////////////////////// PHASE 2 ///////////////////////////////////////////////
		bool phase2 = true;
		while(phase2 == true){
		cout<<"What would you like to do?"<<endl;												//Display choices
		cout<<"D – display a list of all busses, one bus at a time "<<endl;
		cout<<"L – display capacity, mileage, and status for one specific bus; given its bus ID "<<endl;
		cout<<"C – change the status of a bus; given its bus ID "<<endl;
		cout<<"O - order a new bus "<<endl;
		cout<<"X – exit "<<endl;
		cin>>SuserInput;


			//////////////////////////////////// Display /////////////////////////////////////////
		if(SuserInput == "d"){												//Display every bus and everything about it
			for(int i = 0; i<track;i++)
				{
					cout<<listbus[i].getBusID()<<setw(15)<<listbus[i].getManufact()<<setw(15);
					cout << listbus[i].getCapacity()<<setw(15)<<listbus[i].getMilage()<<setw(15)<<listbus[i].getStatus()<< endl;
				}
		}
			//////////////////////////////////// List /////////////////////////////////////////
		if(SuserInput == "l"){
			cout<<"Please give bus ID"<<endl;
			cin>>SuserInput;
			for(int i = 0;i<track; i++){
				if(i == track && SuserInput != listbus[i].getBusID()){		// checks the entire array, buslist,if any of the bus equal the user input
					cout<<"Invalid Bus ID"<<endl;
				}
				if(SuserInput == listbus[i].getBusID()){						//Display the selected bus
					cout<<listbus[i].getBusID()<<setw(15)<<listbus[i].getManufact()<<setw(15)<<
							listbus[i].getCapacity()<<setw(15)<<listbus[i].getMilage()<<setw(15)<<listbus[i].getStatus()<<endl;
				}
			}
		}
			//////////////////////////////////// Change /////////////////////////////////////////
		if(SuserInput == "c"){
			cout<<"Please give bus ID"<<endl;
			cin>>SuserInput;
			for(int i = 0;i<track; i++){
				if(i == track && SuserInput != listbus[i].getBusID()){			// checks the entire array, buslist,if any of the bus equal the user input
					cout<<"Invalid Bus ID"<<endl;
				}
				if(SuserInput == listbus[i].getBusID()){
					cout<<"Current bus status: "<<listbus[i].getStatus()<<endl;
					cout<<"What would you like to change it to?"<<endl;
					cin>>CuserInput;
					while(!(CuserInput == 'a' || CuserInput == 'm'|| CuserInput == 'r')){
						cout<<"Please enter valid status"<<endl;
						cin>>CuserInput;
					}
					listbus[i].setStatus(CuserInput);
					cout<<"Status has been changed."<<endl;
				}
			}
		}
			/////////////////////////////////////Create a New Bus/////////////////////////////////////
		if(SuserInput == "o"){
			cout<<"What is the ID of the new bus? "<<endl;
			cin>>SuserInput;
			listbus[track].setBusID(SuserInput);
			cout<<"What the Manufacturer of the new bus?"<<endl;
			cin>>SuserInput;
			listbus[track].setManufact(SuserInput);
			cout<<"What is the capacity of it?"<<endl;
			cin>>IuserInput;
			listbus[track].setCapacity(IuserInput);
			cout<<"Your new bus has been created."<<endl;
			track++;
		}
			///////////////////////////////////// Exit /////////////////////////////////////////
		if(SuserInput == "x"){													//ends the loop
			cout<<"Thank you."<<endl;
			cout<<"Good Bye"<<endl;
			phase2 = false;
			delete listbus;															//ends the program
			break;
		}
		}
		delete listbus;
	}



BusManager::BusManager() {
	// TODO Auto-generated constructor stub


}
