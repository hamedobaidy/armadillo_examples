/*
 ============================================================================
 Name        : armadillo_example.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv) {
	mat A = randu<mat>(4, 5);
	mat B = randu<mat>(4, 5);

	cout << A * B.t() << endl;

	return 0;
}
