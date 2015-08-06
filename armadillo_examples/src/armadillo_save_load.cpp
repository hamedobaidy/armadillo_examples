/*
 ============================================================================
 Name        : armadillo_save_load.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : GNU General Public License
 Description : Armadillo save and load example.
 ============================================================================
 */

#include <iostream>
#include <sstream>
#include <armadillo>

using namespace std;
using namespace arma;

int main(void) {


    mat A = randu<mat>(5,5);
    A.print("A before saving:");
    A.save("A1.mat");  // default save format is arma_binary
    A.save("A2.mat", arma_ascii);

    mat B;
    // automatically detect format type
    B.load("A1.mat");
    B.print("B:");

    mat C;
    // force loading in the arma_ascii format
    C.load("A2.mat", arma_ascii);
    C.print("C:");


    // example of saving/loading using a stream
    std::stringstream s;
    A.save(s);

    mat D;
    D.load(s);
    D.print("D:");


    // example of testing for success
    mat E;
    bool status = E.load("A2.mat");

    if(status == true)
      {
      cout << "loaded okay" << endl;
      }
    else
      {
      cout << "problem with loading" << endl;
      }


	return 0;
}
