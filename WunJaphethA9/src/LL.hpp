/*
 * LL.hpp
 *
 *  Created on: Dec 5, 2018
 *      Author: student
 */

#ifndef LL_HPP_
#define LL_HPP_

#include<iostream>
#include<string>
using namespace std;

//typedef string T;
struct Element
{
	int dataValue;
	Element *nextPtr;
};

class LL
{
	private:
		Element *LLheader;
	public:
		LL();
		bool isEmpty();
		void push_back(int data);
		void push_front(int data);
		void debug();
		void display_nodes();
};

#endif /* LL_HPP_ */
