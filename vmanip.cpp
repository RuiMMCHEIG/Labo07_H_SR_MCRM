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

//-------------------------------------------
// Local functions
//-------------------------------------------
int vectSum(const vect& v) {
   int i = 0;
   accumulate(v.begin(), v.end(), i);
   return i;
}

bool vectEqualSize(const vect& v1, const vect& v2) {
   return (v1.size() == v2.size());
}

//-------------------------------------------
// Public functions
//-------------------------------------------
std::ostream &operator<<(std::ostream& os, const vect& v) {
    cout << "(";
    for (vect::const_iterator i = v.begin(); i != v.end(); ++i) {
        cout << *i;
        if (next(i) != v.end()) {
            cout << ", " ;
        }
    }
    cout << ")";

    return os;
}

ostream& operator << (ostream& os, const matrix& m) {
   //Start of Matrix
   cout << "[";
   for (matrix::const_iterator line = m.begin(); line != m.end(); ++line) {
      cout << *line;
      if (next(line) != m.end()) cout << ",";
   }
   //End of Matrix
   cout << "]";
   return os;
}

bool isSquare(const matrix& m) {

}

bool isRegular(const matrix& m) {
   if (m.empty()) return true;
   return equal(m.begin(), m.end() - 1, m.begin() + 1, vectEqualSize);
}

size_t minCol(const matrix& m) {

}

vect sumLine(const matrix& m) {
   vect sum(m.size());
   transform(m.begin(), m.end(), sum.begin(), vectSum);
   return sum;
}

vect sumColumn(const matrix &m) {

}

vect vectSumMin(const matrix &m) {
   vect sums = sumLine(m);
   return m.at(distance(sums.begin(), min_element(sums.begin(), sums.end())));
}

void suffleMatrix(matrix &m) {

}

void sortMatrix(matrix& m) {
   sort(m.begin(), m.end());
}