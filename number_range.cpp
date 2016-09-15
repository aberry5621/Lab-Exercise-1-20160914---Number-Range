//
//  number_range.cpp
//  Lab Exercise 1 20160914
//  Copyright © 2016 COMP130. All rights reserved.
//


#include <iostream>
#include <ctime>
using namespace std;

int main() {

	cout << "Generate Number Range Betwixt Bounds \n";

	// Data and Initialization
	// random seed
	srand(time(0));
	int lowbound = 0, upbound = 0;
	int random_number = 0;



	// I
	cout << "Enter lower bound: ";
	cin >> lowbound;
	cout << "Enter upper bound: ";
	cin >> upbound;

	// P  // O
	for (int i = 0; i < 10; i++) {
		random_number = lowbound + rand() % (upbound - lowbound + 1);
		cout << random_number << endl;
	}
	
	// 0


	return 0;
}
