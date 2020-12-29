//============================================================================
// Name        : Assign2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>
#include "Functions.cpp"
using namespace std;

int main()
{
	int userInput=0;
    bool stop= false;
	int allocate[100];
    int size = sizeof(allocate)/sizeof(allocate[0]);
    randArray(allocate,size);
    displayArr(allocate,size);
    bubbleSort(allocate,size);
	while(stop==false)
	{
	cout<<"What number would you like to search for?"<<endl;
    cin>>userInput;
	if(userInput<0||userInput>100)
		{
		stop=true;
		return 0;
		}
	cout<<"From a Brinary Search: "<<endl;
	binarySearch(allocate,size,userInput);
	cout<<"From a Linear Search: "<<endl;
	linearSearch(allocate,size,userInput);
	}

    return 0;
}
