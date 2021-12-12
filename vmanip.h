/*
-------------------------------------------------------------------------------------------------
Filename        : vmanip.h
Laboratory name : Labo 07 Vector & Matrix
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
 * Displays a Vector in the format (v1, v2, ..., vn)
 * @param os Output stream
 * @param v Vector
 * @return Output stream
 */
std::ostream &operator<<(std::ostream &os, const vect &v); //Richard

/**
 * Displays a Matrix in the format [(..), (..), (..)]
 * @param os Output stream
 * @param m Matrix
 * @return Output Stream
 */
std::ostream &operator<<(std::ostream &os, const matrix &m); //Rui

/**
 * Returns a boolean indicating whether the matrix is square
 * @param m Matrix
 * @return Boolean indicating whether the matrix is square
 */
bool isSquare(const matrix &m); //Richard

/**
 * Returns a boolean indicating if the matrix is regular (all rows of the same size)
 * @param m Matrix
 * @return Boolean indicating if the matrix is regular
 */
bool isRegular(const matrix &m); //Rui

/**
 * Returns the minimum length of vectors of a matrix
 * @param m Matrix
 * @return Minimum length
 */
size_t minCol(const matrix &m); //Richard

/**
 * Returns a vector containing the sum of the values of each of the rows
 * @param m Matrix
 * @return Vector containing the sum of the values of each of the rows
 */
vect sumLine(const matrix &m); //Rui

/**
 * Returns a vector containing the sum of the values of each of the columns
 * @param m Matrix
 * @return Vector containing the sum of the values of each of the columns
 */
vect sumColumn(const matrix &m); //Richard

/**
 * Return the vector of a matrix with the lowest sum of values.
 * If several vectors have the same sum,
 * the function returns the one with the lowest index
 * @param m Matrix
 * @return Vector with the lowest sum of values
 */
vect vectSumMin(const matrix &m); //Rui

/**
 * Shuffle the vectors of a matrix without altering them
 * @param m Matrix
 */
void shuffleMatrix(matrix &m); //Richard

/**
 * Sort a matrix in ascending order.
 * @param m Matrix
 */
void sortMatrix(matrix &m); //Rui

#endif //VMANIP_H
