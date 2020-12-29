//============================================================================
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <iostream>
#include <array>
#include <stdlib.h>
#include <time.h>
using namespace std;

void randArray(int array[], int t) {		//inputs random numbers into the array
    for (int i = 0; i < t; i++) {
        array[i] = rand() % 100;
    }
}
void bubbleSort(int arr[], int size)		//sorts the array
{
	int temp=0;
	for(int i = 0; i < size-1; i++)
		{
			for (int j = 0; j < size-i-1; j++)
			{
				if (arr[j] > arr[j+1])
				{
					temp = arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
}

int displayArr(int arr[],int size)		//displays the values in the array
{
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]+""<<endl;
    }
    return 0;
}

void dynAlloc(int size, int *& array) {
	array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
    }
}

int binarySearch(int *array, int size, int value) {
	int first = 0, last = size- 1, middle, position = -1; // Position of search value
    bool found = false;
    while (!found && first <= last) {
        middle = (first + last) / 2; // midpoint value
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            {
            last = middle - 1;
            }
        else
        {
           first = middle + 1;
        }
    }
    cout<<position<<endl;	//prints out the position of the value
    return position;
}

int linearSearch(int * list, int size, int value) {
	int index = 0;
	int position = -1;
	bool found = false;
	while (index < size && !found) {
		if (list[index] == value)
		{
		  found = true;
		  position = index;
		}
		index++;
	}
    cout<<position<<endl;	//prints out the position of the value
	return position;
}
