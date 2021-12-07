/*
-----------------------------------------------------------------------------------
Filename        : main.cpp
Laboratory name : Vectors & Matrix
Author(s)       : Rui Manuel Mota Carneiro & Sierra Richard
Creation date   : 07.12.2021

Description     :

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <cstdlib>
#include "vmanip.h"
using namespace std;

int main() {

   vect testVect1{3, 5, 9, 3, 1};
   vect testVect2{6, 5, 2, 4, 3, 3};
   vect testVect3{5, 6, 3, 2, 5};
   vect testVect4{1, 5, 24, 7, 3};
   vect testVect5{};

   matrix testMatrix1{ testVect1, testVect3, testVect4, testVect1, testVect4};
   matrix testMatrix2{ testVect1, testVect3};
   matrix testMatrix3{ testVect1, testVect2};
   matrix testMatrix4{};
   matrix testMatrix5{ testVect5, testVect5, testVect5};

   cout << testMatrix1;
   cout << testMatrix2;
   cout << testMatrix3;
   cout << testMatrix4;
   cout << testMatrix5;

   return EXIT_SUCCESS;
}
