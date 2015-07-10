/*
 ============================================================================
 Name        : armadillo_find.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	mat  A  = randu<mat>(5,5);
	A.print("A:");
	mat  B  = randu<mat>(5,5);
	B.print("B:");

	uvec q1 = find(A > B);
	q1.print("q1:");
	umat C = A > 0.5;
	uvec q2 = find(C);
	q2.print("q2:");
	uvec q3 = find(C, 3, "last");
	q3.print("q3:");

	return 0;
}
