/*
-------------------------------------------------------------------------------------------------
Filename        : vmanip.cpp
Laboratory name : Labo 07 Vector & Matrix
Author(s)       : Rui Manuel Mota Carneiro, Sierra Richard
Creation date   : 07.12.2021

Description     : Library providing the elements necessary for an easy manipulation of vectors
                  and integer matrices.

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------------------
*/

#include <algorithm>
#include <numeric>
#include <random>
#include <chrono>
#include "vmanip.h"

using namespace std;

//-------------------------------------------------------------------------------------------
//  Local functions
//-------------------------------------------------------------------------------------------

/**
 * Sum the values of a vector
 * @param v Vector to sum
 * @return Sum of the vector
 */
int vectSum(const vect &v) {
   int i = 0;
   i = accumulate(v.begin(), v.end(), i);
   return i;
}

/**
 * Checks if two vectors have the same size
 * @param v1 First vector to check
 * @param v2 Second vector to check
 * @return If the sizes match
 */
bool vectEqualSize(const vect &v1, const vect &v2) {
   return v1.size() == v2.size();
}

/**
 * Checks if a vector is smaller than another
 * @param v1 First vector to check
 * @param v2 Second vector to check
 * @return If the first vector is smaller than the second
 */
bool vectLesserSize(const vect &v1, const vect &v2) {
   return v1.size() < v2.size();
}

//-------------------------------------------------------------------------------------------
//  Public functions
//-------------------------------------------------------------------------------------------

std::ostream &operator<<(std::ostream &os, const vect &v) {
   cout << "(";
   for (vect::const_iterator i = v.begin(); i != v.end(); ++i) {
      cout << *i;
      if (next(i) != v.end()) {
         cout << ", ";
      }
   }
   cout << ")";

   return os;
}

ostream &operator<<(ostream &os, const matrix &m) {
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

bool isSquare(const matrix &m) {
   if (m.empty()) return true;
   return isRegular(m) && m[0].size() == m.size();
}

bool isRegular(const matrix &m) {
   if (m.empty()) return true;
   return equal(m.begin(), m.end() - 1, m.begin() + 1, vectEqualSize);
}

size_t minCol(const matrix &m) {
   return min_element(m.begin(), m.end(), vectLesserSize)->size();
}

vect sumLine(const matrix &m) {
   vect sum(m.size());
   transform(m.begin(), m.end(), sum.begin(), vectSum);
   return sum;
}

vect sumColumn(const matrix &m) {
   vect sum(max_element(m.begin(), m.end(), vectLesserSize)->size());
   fill(sum.begin(), sum.end(), 0);
   for (const vect &v : m) {
      for (size_t i = 0; i < v.size(); ++i) {
         sum.at(i) += v.at(i);
      }
   }
   return sum;
}

vect vectSumMin(const matrix &m) {
   vect sums = sumLine(m);
   return m.at(size_t(distance(sums.begin(), min_element(sums.begin(), sums.end()))));
}

void shuffleMatrix(matrix &m) {
// Reference : https://www.cplusplus.com/reference/algorithm/shuffle/?kw=shuffle
    unsigned seed = unsigned(chrono::system_clock::now().time_since_epoch().count());
    std::shuffle(m.begin(), m.end(), std::default_random_engine(seed));
}

void sortMatrix(matrix &m) {
   sort(m.begin(), m.end());
}