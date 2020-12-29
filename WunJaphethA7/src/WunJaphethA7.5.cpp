//============================================================================
// Name        : 5.cpp
// Author      : Japheth Wun
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Bus.hpp"
#include "Railcar.hpp"
#include "Vehicle.hpp"
using namespace std;

int main() {
	ifstream fin;
	fin.open("test.txt");
	if (!fin) {
		cerr << "Unable to open file";
		exit(1); // terminate with error
	}
	string ID, brand,p1, p2;
	char status, type;
	int capacity, x;
	Bus *busList[50] = {nullptr};
	int bl = 0;
	Railcar *railList[50] = {nullptr};
	int rl = 0;
	Vehicle *vehicList[50] = {nullptr};
	int vl = 0;
	//12345 Gillig 120 a b 200000 11R22.5 87nl
	while(fin>>ID>>brand>>capacity>>status>>type>>x>>p1>>p2){
		if(type == 'b'){
			busList[bl] = new Bus(ID, brand, capacity, status, x, p1, p2);
						  //Bus(string a, string b, int c, char d, int e, string f, string g)
			bl++;
		}
		if(type == 'r'){
			railList[rl] = new Railcar(ID, brand, capacity, status, x, p1, p2);
			rl++;
		}
		vehicList[vl] = new Vehicle(ID,brand,capacity, status);
		vl++;
	}
	//////////////////////////////////////////////////////////////////////////////////// Display Bus List ////////////////////////////////////////////////////////////////////////////////////////////////////
	cout<<"Vehicle Type"<<setw(15)<<"Vehicle ID"<<setw(15)<<"Mfr"<<setw(15)<<"Capacity"<<setw(15)<<"Status"<<setw(15)<<"Mileage"<<setw(15)<<"Tire Size"<<setw(15)<< "Fuel Type" <<endl;
	for(int i = 50; i<bl;i++){
		cout<<"Bus"<<setw(15);
		busList[bl]->getID();
		cout<<setw(15);
		busList[bl]->getCapacity();
		cout<<setw(15);
		busList[bl]->getStatus();
		cout<<setw(15);
		busList[bl]->getMilage();
		cout<<setw(15);
		busList[bl]->getTire();
		cout<<setw(15);
		busList[bl]->getFuel();
		cout<<endl;
	}
	/////////////////////////////////////////////////////////////////////////////////// Display Railcar List /////////////////////////////////////////////////////////////////////////////////////////////////
	 cout<<"Vehicle Type"<<setw(15)<<"Vehicle ID"<<setw(15)<<"Mfr"<<setw(15)<<"Capacity"<<setw(15)<<"Status"<<setw(15)<<"Power Time"<<setw(15)<<"Motor Type"<<setw(15)<<"Insp Date"<<endl;
	 for(int i = 50; i<rl;i++){
		 cout<<"Railcar"<<setw(15);
		 railList[rl]->getID();
		 cout<<setw(15);
		 railList[rl]->getCapacity();
		 cout<<setw(15);
		 railList[rl]->getStatus();
		 cout<<setw(15);
		 railList[rl]->getPWR();
		 cout<<setw(15);
		 railList[rl]->getMotor();
		 cout<<setw(15);
		 railList[rl]->getInspect();
		 cout<<endl;
	 }
	 delete busList;
	 delete railList;
	 delete vehicList;
	 return 0;
}

/*void Assignment7(){
	ifstream fin;
	fin.open("a7data.txt");
	if (!fin) {
	    cerr << "Error in opening the file" << endl;
	}
	string ID, brand,p1, p2;
	char status, type;
	int capacity, x;
	Bus *busList[50] = {nullptr};
	int bl = 0;
	Railcar *railList[50] = {nullptr};
	int rl = 0;
	Vehicle *vehicList[50] = {nullptr};
	int vl = 0;
	//12345 Gillig 120 a b 200000 11R22.5 87nl
	while(fin>>ID>>brand>>capacity>>status>>type>>x>>p1>>p2){
		if(type == 'b'){
			busList[bl] = new Bus(ID, brand, capacity, status, x, p1, p2);
						  //Bus(string a, string b, int c, char d, int e, string f, string g)
			bl++;
		}
		if(type == 'r'){
			railList[rl] = new Railcar(ID, brand, capacity, status, x, p1, p2);
			rl++;
		}
		vehicList[vl] = new Vehicle(ID,brand,capacity, status);
		vl++;
	}

	//////////////////////////////////////////////////////////////////////////////////// Display Bus List ////////////////////////////////////////////////////////////////////////////////////////////////////
	cout<<"Vehicle Type"<<setw(25)<<"Vehicle ID"<<setw(25)<<"Mfr"<<setw(25)<<"Capacity"<<setw(25)<<"Status"<<setw(25)<<"Mileage"<<setw(25)<<"Tire Size"<<setw(25)<< "Fuel Type" <<endl;
	for(int i = 50; i<bl;i++){
		cout<<"Bus"<<setw(25);
		busList[bl]->getID();
		cout<<setw(25);
		busList[bl]->getCapacity();
		cout<<setw(25);
		busList[bl]->getStatus();
		cout<<setw(25);
		busList[bl]->getMilage();
		cout<<setw(25);
		busList[bl]->getTire();
		cout<<setw(25);
		busList[bl]->getFuel();
		cout<<endl;
	}
	/////////////////////////////////////////////////////////////////////////////////// Display Railcar List /////////////////////////////////////////////////////////////////////////////////////////////////

	 cout<<"Vehicle Type"<<"Vehicle ID"<<"Mfr"<<"Capacity"<<"Status"<<"Power Time"<<"Motor Type"<<"Insp Date"<<endl;
	 for(int i = 50; i<rl;i++){
	 	cout<<"Railcar"<<setw(25);
	 	railList[rl]->getID();
 		cout<<setw(25);
 		railList[rl]->getCapacity();
 		cout<<setw(25);
 		railList[rl]->getStatus();
 		cout<<setw(25);
 		railList[rl]->getPWR();
 		cout<<setw(25);
 		railList[rl]->getMotor();
 		cout<<setw(25);
 		railList[rl]->getInspect();
 		cout<<endl;
 	}

};*/
