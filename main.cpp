/*
-------------------------------------------------------------------------------------------------
Filename        : main.cpp
Laboratory name : Labo 07 Vecteur et Matrices
Author(s)       : Rui Manuel Mota Carneiro, Sierra Richard
Creation date   : 07.12.2021

Description     : Library providing the elements necessary for an easy manipulation of vectors
                  and integer matrices.

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <limits> // clear buffer
#include "vmanip.h"

using namespace std;

int main() {


    //-------------------------------------------------------------------------------------------
    //  Initialisation of vectors and matrices
    //-------------------------------------------------------------------------------------------

    vect testVect1{3, 5, 9, 3, 1};   //sum = 21
    vect testVect2{6, 5, 2, 4, 3, 3};//sum = 23
    vect testVect3{5, 6, 3, 2, 5};   //sum = 21
    vect testVect4{1, 5, 24, 7, 3};  //sum = 40
    vect testVect5{};                //sum = 0

    matrix testMatrix1{testVect1, testVect3, testVect4, testVect1, testVect4};
    matrix testMatrix2{testVect1, testVect3};
    matrix testMatrix3{testVect2, testVect4};
    matrix testMatrix4{};
    matrix testMatrix5{testVect5, testVect5, testVect5};
    matrix testMatrix6{testVect2, testVect3, testVect5};


    //-------------------------------------------------------------------------------------------
    //  Test functions
    //-------------------------------------------------------------------------------------------

    // Square matrix

    // Regular matrix

    // Not square/regular matrix

    // empty matrix


    cout << testMatrix2 << endl;
    cout << isSquare(testMatrix2) << endl;

    cout << testMatrix1 << endl;
    cout << isSquare(testMatrix1) << endl;


    shuffleMatrix(testMatrix1);
    cout << testMatrix1 << endl;

    cout << testMatrix6 << endl;
    cout << minCol(testMatrix6) << endl;


    cout << sumColumn(testMatrix6) << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return EXIT_SUCCESS;
}
