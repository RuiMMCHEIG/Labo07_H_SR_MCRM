/*
-----------------------------------------------------------------------------------
Filename        : vmanip.h
Laboratory name : Labo 07
Author(s)       : Rui Manuel Mota Carneiro & Sierra Richard
Creation date   : 07.12.2021

Description     :

Comment(s)      :

Compiler        : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef VMANIP_H
#define VMANIP_H

#include <vector>
#include <iostream>

using vect   = std::vector<int>;
using matrix = std::vector<vect>;

/**
 *
 * @param os
 * @param m
 * @return
 */
std::ostream& operator << (std::ostream& os, const vect& m); //Richard

/**
 *
 * @param os
 * @param m
 * @return
 */
std::ostream& operator << (std::ostream& os, const matrix& m); //Rui

/**
 *
 * @param m
 * @return
 */
bool isSquare(const matrix& m); //Richard

/**
 *
 * @param m
 * @return
 */
bool isRegular(const matrix& m); //Rui

/**
 *
 * @param m
 * @return
 */
size_t minCol(const matrix& m); //Richard

/**
 *
 * @param m
 * @return
 */
vect sumLine(const matrix& m); //Rui

/**
 *
 * @param m
 * @return
 */
vect sumColumn(const matrix& m); //Richard

/**
 *
 * @param m
 * @return
 */
vect vectSumMin(const matrix& m); //Rui

/**
 *
 * @param m
 */
void suffleMatrix(matrix& m); //Richard

/**
 *
 * @param m
 */
void sortMatrix(matrix& m); //Rui

#endif //VMANIP_H
