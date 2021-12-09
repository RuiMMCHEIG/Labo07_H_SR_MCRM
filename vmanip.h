/*
-------------------------------------------------------------------------------------------------
Filename        : vmanip.h
Laboratory name : Labo 07 Vecteur et Matrices
Author(s)       : Rui Manuel Mota Carneiro, Sierra Richard
Creation date   : 07.12.2021

Description     : Library providing the elements necessary for an easy manipulation of vectors
                  and integer matrices.

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-------------------------------------------------------------------------------------------------
*/

#ifndef VMANIP_H
#define VMANIP_H

#include <vector>
#include <iostream>

using vect = std::vector<int>;
using matrix = std::vector<vect>;

/**
 *
 * @param os Output stream
 * @param v Vector
 * @return Displays a Vector in the format (v1, v2, ..., vn)
 */
std::ostream &operator<<(std::ostream &os, const vect &v); //Richard

/**
 *
 * @param os Output stream
 * @param m Matrix
 * @return Displays a Matrix in the format [(..), (..), (..)]
 */
std::ostream &operator<<(std::ostream &os, const matrix &m); //Rui

/**
 *
 * @param m Matrix
 * @return Returns a boolean indicating whether the matrix is square
 */
bool isSquare(const matrix &m); //Richard

/**
 *
 * @param m Matrix
 * @return Returns a boolean indicating if the matrix is regular (all rows of the same size)
 */
bool isRegular(const matrix &m); //Rui

/**
 *
 * @param m Matrix
 * @return Returns the minimum length of vectors of a matrix
 */
size_t minCol(const matrix &m); //Richard

/**
 *
 * @param m Matrix
 * @return Returns a vector containing the sum of the values of each of the rows.
 */
vect sumLine(const matrix &m); //Rui

/**
 *
 * @param m Matrix
 * @return Returns a vector containing the sum of the values of each of the columns.
 */
vect sumColumn(const matrix &m); //Richard

/**
 *
 * @param m Matrix
 * @return Return the vector of a matrix with the lowest sum of values.
 * If several vectors have the same sum, the function returns the one with the lowest index.
 */
vect vectSumMin(const matrix &m); //Rui

/**
 * Mix randomly the vectors of a matrix without altering the vectors.
 * The generator seed is based on the current time
 * @param m Matrix
 */
void shuffleMatrix(matrix &m); //Richard

/**
 * Sort a matrix in ascending order based on the min element of a vector.
 * @param m Matrix
 */
void sortMatrix(matrix &m); //Rui

#endif //VMANIP_H
