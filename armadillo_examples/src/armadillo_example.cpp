/*
 ============================================================================
 Name        : armadillo_example.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Armadillo first example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char** argv) {
	mat A = randu<mat>(4, 5);
	A.print("A = ");
	mat B = randu<mat>(4, 5);
	B.print("B = ");

	vec x = randu<vec>(3);
	x.print("x =");

	cout << A * B.t() << endl;

	return 0;
}
