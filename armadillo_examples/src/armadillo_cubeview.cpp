/*
 ============================================================================
 Name        : armadillo_cubeview.cpp
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
	cube A = randu<cube>(2,3,4);
	A.print("A:");

	mat B = A.slice(1);
	B.print("B:");

	A.slice(0) = randu<mat>(2,3);
	A.slice(0)(1,2) = 99.0;

	A.subcube(0,0,1,  1,1,2)             = randu<cube>(2,2,2);
	A( span(0,1), span(0,1), span(1,2) ) = randu<cube>(2,2,2);
	A( 0,0,1, size(2,2,2) )              = randu<cube>(2,2,2);
	A.print("A:");

	// add 123 to all elements of A greater than 0.5
	uvec e = find(A > 0.5);
	A.elem(e) += 123.0;
	A.print("A:");

	return 0;
}
