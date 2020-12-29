//============================================================================
// Name        : WunJaphethA8v2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <chrono>
#include <unistd.h>
#include "TimestampedContainer.hpp"
using namespace std;

int main() {
//
// step 1 - define a container of 5 elements
//
	TimestampedContainer<int,string> myArray(5);
	int i;
//
// step 2 - populate 5 elements in the container
//
	for (i=0;i<5;i++)
	{
		myArray.insertElement(i*111,to_string(i*11111));
		cout << "main: should have inserted element " << i << " with key " << i*111 << endl;
		sleep(2);
	}
//
// step 3 - display the container
//
	int k;
	string v, t;
	for (i=0;i<5;i++)
	{
		myArray.getElement(i,k,v,t);
		cout << "main: element " << i << " k = " << k << " v = " << v << " t = " << t << endl;
	}
//
// step 4 - test the not found condition
//
	try {
	myArray.getElement(5,k,v,t);
	cout << "main: element 5 was retrieved, should have bounced to the catch" << endl;
	}
	catch(string & errorMessage)
	{
		cout << "main: successfully caught bad retrieval, message -->" << errorMessage << endl;
	};
//
// step 5 - test the insert too many condition
//
	try {
	myArray.insertElement(555,"55555");
	}
	catch(string & errorMessage)
	{
		cout << "main: successfully caught bad insert, message -->" << errorMessage << endl;
	};
//
// step 6 - clean up and exit
//
	myArray.deleteContainer();
	cout << "main: after delete, now returning" << endl;
	return 0;
}
