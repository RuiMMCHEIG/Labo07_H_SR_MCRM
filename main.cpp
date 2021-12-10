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
   //  Initialisation of vectors and matrix
   //-------------------------------------------------------------------------------------------

   vect testVect1 = { 1, 3, 5, 2, 4};
   vect testVect2 = {};
   vect testVect3 = { 5, 4, 3, 2, 1};

   matrix testMatrix1 = { {1, 2, 3, 4, 5},
                        {2, 3, 4},
                        {5, 3, 1, 4, 2}};
   matrix testMatrix2 = { {1, 3, 5, 2, 3},
                        {5, 4, 3, 4, 3},
                        {7, 6, 5, 4, 3},
                        {1, 2, 3, 2, 3},
                        {7, 6, 7, 1, 2}};
   matrix testMatrix3 = { {1, 2, 3},
                        {4, 5, 6}};
   matrix testMatrix4 = { {}, {}, {}};
   matrix testMatrix5 = { {1, 2, 3},
                        {},
                        {4, 5, 6}};

   //-------------------------------------------------------------------------------------------
   //  Test functions
   //-------------------------------------------------------------------------------------------

   //Display Vector
   cout << "Vecteur 1 : " << testVect1 << endl;
   cout << "Vecteur 2 : " << testVect2 << endl;
   cout << "Vecteur 3 : " << testVect3 << endl;
   cout << endl;
   //Display Matrix
   cout << "Matrice 1 : " << testMatrix1 << endl;
   cout << "Matrice 2 : " << testMatrix2 << endl;
   cout << "Matrice 3 : " << testMatrix3 << endl;
   cout << "Matrice 4 : " << testMatrix4 << endl;
   cout << "Matrice 5 : " << testMatrix5 << endl;
   cout << endl;
   //Square Matrix
   cout << "Matrices carrees ? (Attendu = 01000) : "
        << isSquare(testMatrix1) << isSquare(testMatrix2) << isSquare(testMatrix3)
        << isSquare(testMatrix4) << isSquare(testMatrix5) << endl;
   cout << endl;
   //Regular Matrix
   cout << "Matrices regulieres ? (Attendu = 01110) : "
        << isRegular(testMatrix1) << isRegular(testMatrix2) << isRegular(testMatrix3)
        << isRegular(testMatrix4) << isRegular(testMatrix5) << endl;
   cout << endl;
   //Minimum Column
   cout << "Matrice 1 min col (Attendu = 3) : " << minCol(testMatrix1) << endl;
   cout << "Matrice 2 min col (Attendu = 5) : " << minCol(testMatrix2) << endl;
   cout << "Matrice 3 min col (Attendu = 3) : " << minCol(testMatrix3) << endl;
   cout << "Matrice 4 min col (Attendu = 0) : " << minCol(testMatrix4) << endl;
   cout << "Matrice 5 min col (Attendu = 0) : " << minCol(testMatrix5) << endl;
   cout << endl;
   //Sum Lines
   cout << "Matrice 1 ligne (Attendu = 15,9,15)  : " << sumLine(testMatrix1) << endl;
   cout << "Matrice 2 ligne (A = 14,19,25,11,23) : " << sumLine(testMatrix2) << endl;
   cout << "Matrice 3 ligne (Attendu = 6,15)     : " << sumLine(testMatrix3) << endl;
   cout << "Matrice 4 ligne (A = 0,0,0)          : " << sumLine(testMatrix4) << endl;
   cout << "Matrice 5 ligne (A = 6,0,15)         : " << sumLine(testMatrix5) << endl;
   cout << endl;
   //Sum Columns
   cout << "Matrice 1 colonne (A = 8,8,8,8,7)      : "
        << sumColumn(testMatrix1) << endl;
   cout << "Matrice 2 colonne (A = 21,21,23,13,14) : "
        << sumColumn(testMatrix2) << endl;
   cout << "Matrice 3 colonne (A = 5,7,9)          : "
        << sumColumn(testMatrix3) << endl;
   cout << "Matrice 4 colonne (A = rien ou 0)      : "
        << sumColumn(testMatrix4) << endl;
   cout << "Matrice 5 colonne (A = 5, 7, 9)        : "
        << sumColumn(testMatrix5) << endl;
   cout << endl;
   //Vector with minimum Sum
   cout << "Matrice 1 minimum (A = 2,3,4)     : " << vectSumMin(testMatrix1) << endl;
   cout << "Matrice 2 minimum (A = 1,2,3,2,3) : " << vectSumMin(testMatrix2) << endl;
   cout << "Matrice 3 minimum (A = 1,2,3)     : " << vectSumMin(testMatrix3) << endl;
   cout << "Matrice 4 minimum (A = rien)      : " << vectSumMin(testMatrix4) << endl;
   cout << "Matrice 5 minimum (A = rien)      : " << vectSumMin(testMatrix5) << endl;
   cout << endl;
   //Shuffle Matrix
   shuffleMatrix(testMatrix1);
   shuffleMatrix(testMatrix2);
   shuffleMatrix(testMatrix3);
   shuffleMatrix(testMatrix4);
   shuffleMatrix(testMatrix5);
   cout << "Matrice 1 melange : " << testMatrix1 << endl;
   cout << "Matrice 2 melange : " << testMatrix2 << endl;
   cout << "Matrice 3 melange : " << testMatrix3 << endl;
   cout << "Matrice 4 melange : " << testMatrix4 << endl;
   cout << "Matrice 5 melange : " << testMatrix5 << endl;
   cout << endl;
   //Sort Matrix
   sortMatrix(testMatrix1);
   sortMatrix(testMatrix2);
   sortMatrix(testMatrix3);
   sortMatrix(testMatrix4);
   sortMatrix(testMatrix5);
   cout << "Matrice 1 ordonnee : " << testMatrix1 << endl;
   cout << "Matrice 2 ordonnee : " << testMatrix2 << endl;
   cout << "Matrice 3 ordonnee : " << testMatrix3 << endl;
   cout << "Matrice 4 ordonnee : " << testMatrix4 << endl;
   cout << "Matrice 5 ordonnee : " << testMatrix5 << endl;
   cout << endl;

   cout << "Appuyez sur ENTER pour continuer..." << endl;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;
}
