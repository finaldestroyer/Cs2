//============================================================================
// Name        : Assign2.cpp
// Author      : Japheth Wun
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
using namespace std;

#include <iostream>
#include <array>
#include <math.h>
#include <stddef.h>
#include <algorithm>
#include <iterator>
using namespace std;

void insertionSort(int arr[])
{
int b=0;
	int c = (sizeof(arr)/sizeof(arr[0]))^2;
	while(b<c)
    {
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	b++;
    }
	for(int i = 0; i < sizeof(arr)/sizeof(arr[0])+1; i++)
	    	{
	    		cout<<arr[i]<<" ";
	    	}
}

int main() {
	int Array[] = {40,20,60,50,10,80,70};
	insertionSort(Array);
	return 0;
}
