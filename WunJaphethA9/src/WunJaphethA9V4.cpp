//============================================================================
// Name        : WunJaphethA9V4.cpp
// Author      : Japheth
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LL.hpp"
using namespace std;


int main() {

	LL theLL;

	theLL.push_back(1);
	theLL.push_back(2);
	theLL.debug();

	theLL.push_front(3);
	theLL.push_front(4);
	theLL.push_front(5);
	theLL.debug();

	theLL.display_nodes();
	cout <<"main exiting" << endl;

	return 0;
}
