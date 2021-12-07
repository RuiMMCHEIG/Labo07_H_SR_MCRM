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

ostream &operator<<(ostream &os, const matrix &m) {
    cout << "[";
    for (const vect &v: m) {
        cout << "(";
        for (const int &value: v) {
            cout << value;
        }
        cout << ")";
    }
    cout << "]";
}

bool isSquare(const matrix &m) {

}

bool isRegular(const matrix &m) {

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

void sortMatrix(matrix &m) {

}