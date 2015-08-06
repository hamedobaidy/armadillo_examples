/*
 ============================================================================
 Name        : armadillo_submatrix_views.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Armadillo submatrix view example.
 ============================================================================
 */

#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {
	mat A = zeros<mat>(5,10);
	A.print("Original A:");

	A.submat( 0,1, 2,3 )      = randu<mat>(3,3);
	A( span(0,2), span(1,3) ) = randu<mat>(3,3);
	A( 0,1, size(3,3) )       = randu<mat>(3,3);
	A.print("A");

	mat B = A.submat( 0,1, 2,3 );
	B.print("B:");
	mat C = A( span(0,2), span(1,3) );
	C.print("C:");
	mat D = A( 0,1, size(3,3) );
	D.print("D:");

	A.col(1)        = randu<mat>(5,1);
	A(span::all, 1) = randu<mat>(5,1);
	A.print("A:");

	mat X = randu<mat>(5,5);

	// get all elements of X that are greater than 0.5
	umat C1 = X > 0.5;
	uvec e1 = find(C1);
	vec q = X.elem(e1);

	// add 123 to all elements of X greater than 0.5
	uvec e2 = find(C1);
	X.elem( e2 ) += 123.0;
	X.print("X:");

	// set four specific elements of X to 1
	uvec indices;
	indices << 2 << 3 << 6 << 8;

	X.elem(indices) = ones<vec>(4);
	X.print("X:");

	return 0;
}
