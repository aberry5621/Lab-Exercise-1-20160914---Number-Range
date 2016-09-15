//
//  while_loop.cpp
//  Lab Exercise 2 20160914
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

	cout << "While Loop Programmed \n";

	// Data and Initialization
	int counter = 10;
	int doubled = 0;

	// P  // O
	while (counter < 100) 
	{
		doubled = counter * 2;
		cout << doubled << endl;
		counter = counter + 10;
	}

	// 0


	return 0;
}
