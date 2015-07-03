/*
 ============================================================================
 Name        : armadillo_element_access.cpp
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

int main(void) {
	mat A = randu<mat>(10,10);
	A.print("A =");
	A(9,9) = 123.0;
	double x = A.at(9,9);
	double y = A[99];

	vec p = randu<vec>(10,1);
	p(9) = 123.0;
	double z = p[9];
	p.print("p =");

	return 0;
}
