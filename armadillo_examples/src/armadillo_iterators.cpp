/*
 ============================================================================
 Name        : armadillo_iterators.cpp
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
	mat X = randu<mat>(5, 5);

	mat::iterator a = X.begin();
	mat::iterator b = X.end();

	for (mat::iterator i = a; i != b; ++i) {
		cout << *i << endl;
	}

	mat::col_iterator c = X.begin_col(1);  // start of column 1
	mat::col_iterator d = X.end_col(3);    // end of column 3

	for (mat::col_iterator i = c; i != d; ++i) {
		cout << *i << endl;
		(*i) = 123.0;
	}

	return 0;
}
