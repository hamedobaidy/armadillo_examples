/*
 ============================================================================
 Name        : armadillo_cube.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Armadillo cube example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	cube x(1,2,3);
	x.print("x:");
	cube y = randu<cube>(4,5,6);
	y.print("y:");

	mat A = y.slice(1);  // extract a slice from the cube
	A.print("A:");       // (each slice is a matrix)

	mat B = randu<mat>(4,5);
	B.print("B:");
	y.slice(2) = B;     // set a slice in the cube
	y.print("y:");

	cube q = y + y;     // cube addition
	q.print("q:");
	cube r = y % y;     // element-wise cube multiplication
	r.print("r:");

	cube::fixed<4,5,6> f;
	f.ones();
	f.print("f:");

	return 0;
}
