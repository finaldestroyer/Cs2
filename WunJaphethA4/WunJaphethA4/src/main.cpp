//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Payroll.cpp"
using namespace std;


int main() {

	payroll hobs;
	float temp = 0;
	bool work = true;
	while (work == true){
		cout<<"Enter hours"<<endl;
		cin>>temp;					//Asks User for the number of Hours
		hobs.setnumHrs(temp);		//set the number of hrs
	if(temp<0){
		work = false;
	}
	if(work == true){
		cout<<"Enter rate"<<endl;		//Ask User what is his hrly Rate
		cin>>temp;
		hobs.sethrRate(temp);			//sets the rate paid
	}
	if(temp<0){
			work = false;
		}
	if(work == true){
		cout <<	"Hours: " << hobs.getnumHrs() << endl;
		cout <<	"Rate: " << hobs.gethrRate()<<endl;
		cout << "Regular pay: "<<hobs.getregPay()<<endl;
		cout << "Overtime pay: "<<hobs.getotPay()<<endl;
		cout << "Total Pay: "<< hobs.getregPay() + hobs.getotPay() <<endl;
		cout<<endl;
		}
	}

}
