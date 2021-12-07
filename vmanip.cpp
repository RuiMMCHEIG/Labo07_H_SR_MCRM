/*
-----------------------------------------------------------------------------------
Filename        : vmanip.cpp
Laboratory name : Labo 07
Author(s)       : Rui Manuel Mota Carneiro & Sierra Richard
Creation date   : 07.12.2021

Description     :

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <algorithm>
#include <numeric>
#include "vmanip.h"

using namespace std;


std::ostream &operator<<(std::ostream &os, const vect &v) {
    cout << "(";
    for (vect::const_iterator i = v.begin(); i != v.end(); ++i) {
        cout << *i;
        if (i != v.end()) {
            cout << ", ";
        }
    }
    cout << ")\n";

    return os;
}

ostream& operator << (ostream& os, const matrix& m) {
   //Start of Matrix
   cout << "[";
   for (matrix::const_iterator line = m.begin(); line != m.end(); ++line) {
      if (*line != m.front()) cout << ",";
      cout << *line;
   }
   //End of Matrix
   cout << "]";
   return os;
}

bool isSquare(const matrix &m) {

}

bool isRegular(const matrix& m) {
   /*if (m.empty()) return true;
   return all_of(m.begin(), m.end(), )*/
}

size_t minCol(const matrix &m) {

}

vect sumLine(const matrix &m) {

}

vect sumColumn(const matrix &m) {

}

vect vectSumMin(const matrix &m) {

}

void suffleMatrix(matrix &m) {

}

void sortMatrix(matrix& m) {

}