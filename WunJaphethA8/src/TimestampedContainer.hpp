/*
 * TimestampedContainer.hpp
 *
 *  Created on: Nov 28, 2018
 *      Author: student
 */

#ifndef TIMESTAMPEDCONTAINER_HPP_
#define TIMESTAMPEDCONTAINER_HPP_
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

template <class K, class D>
class TimestampedContainer {
private:
	struct element{
		K key;
		D Data;
		string timestamp;
	};
	int currentPosition;
	int FSize;
	element * elPtr;
public:
	void insertElement(K,D);
	void getElement (int, int&, string&, string&);
	void deleteContainer();
	TimestampedContainer(int);
	//virtual ~TimestampedContainer();
};

template <class K, class D>
void TimestampedContainer <K,D>::TimestampedContainer(int s){
	FSize = s;
	elPtr = new element[s];
	currentPosition = 0;
}
template <class K, class D>
void timestampedContainer<K,D>::insertElement (int K, string D) //insertion
{
	//finding the time stamp >>> code given from the professor
	time_t t;
	t = time(0);
	char* ct;
	ct = ctime (&t);
	string ts = ct;
	if(currentPosition >= FSize)
	{
		string message = "Array is full";
		throw message;
	}
	else
	{
		elPtr[currentPosition].key = K;
		elPtr[currentPosition].data = D;
		elPtr[currentPosition].timestamp = timestamp;

		currentPosition++;
	}
}
template <class K, class D>
void timestampedContainer<K,D>::getElement (int num, int &key, string &data, string &timestamp){
	if(num < currentPosition && num >= 0 )
		{
			cout << "Valid" << endl;
			//TODO //reset and return the new values; // check if code below is ok
			key = elPtr[num].key;
			data = elPtr[num].data;
			timestamp = elPtr[num].timestamp;
		}
		else
		{
			//TODO Throw an exception //check if code below works
			//exit (1);
			string message = "ERROR: number is no within parameters of the array";
			throw message;
		}
}
template <class K, class D>
void TimestampedContainer <K,D>::deleteContainer(){
	delete[] elPtr;
}

#endif /* TIMESTAMPEDCONTAINER_HPP_ */
