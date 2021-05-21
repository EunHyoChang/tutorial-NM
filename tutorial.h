/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : [EunHyo Chang]
Student ID       : 21500622
Created          : 26-03-2018
Modified         : 30-04-2021
Language/ver     : C++ in MSVS2019

Description      : myNM.h
----------------------------------------------------------------*/

#ifndef		_MY_NM_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NM_H

#include "myMatrix.h"

//////////////////////////////////////////////////////////
// myNonLinear.cpp//
/////////////////////////////////////////////////////////

// Bisection method
extern double bisectionNL(double _a0, double _b0, double _tol);

// NewtonRaphson method
extern double newtonRaphson(double (*func)(double), double(*dfunc)(double), double _x0, double _tol);

// Function
extern double func(double _x);

// Function Derivative
extern double dfunc(double _x);

//Combination of Bisection and NewtonRaphson method
extern double Hybrid(double _a0, double _b0, double _x0, double _tol);

// Bonus point problem function
extern double hybrid_func(double _x);

// Bonus point problem function derivative
extern double hybrid_dfunc(double _x);

////////////////////////////////////////////////////////////////////
// mySysNonlinear.cpp//
///////////////////////////////////////////////////////////////////

extern Matrix Initial_X(double x, double y);

extern Matrix Jacobian(Matrix X);

extern Matrix Func(Matrix X);

extern Matrix Solution(Matrix X);

/////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////


// Matrix addition
extern	Matrix	addMat(Matrix _A, Matrix _B);

// Apply back-substitution
extern	Matrix	backSub(Matrix _U, Matrix _d, Matrix _x);

// Apply forward-substitution
extern Matrix fwdsub(Matrix _L, Matrix _P, Matrix _b);

// Apply Gauss Elimination Method
extern void gaussElim(Matrix _A, Matrix _b, Matrix _U, Matrix _d);

// Apply LUdecomposition
extern void LUdecomp(Matrix _A, Matrix _L, Matrix _U, Matrix _P);

// Solve for x in LUx=Pb
extern Matrix solveLU(Matrix _L, Matrix _U, Matrix _P, Matrix _b);

// Find Inverse of A
extern Matrix inv(Matrix A);

// Gaussian Jordan Elimination

extern Matrix GaussJordan(Matrix _A, Matrix _b);

// x vector using LU
extern Matrix LUsolve(Matrix _A, Matrix _b);

extern double norm(Matrix v);

extern void QRdecompose(Matrix* _A, Matrix* _Q, Matrix* _R);

extern Matrix QRfactorization(Matrix _A);

extern Matrix eigval(Matrix _A);

extern Matrix eigvec3(Matrix _A);

extern Matrix eigvec2(Matrix _A);

extern double cond(Matrix _A, int max_min);

extern Matrix linearFit(Matrix _X, Matrix _Y);

extern Matrix linearInterp(Matrix _X, Matrix _Y, Matrix xq);

extern Matrix	gradient(Matrix _x, Matrix _y);

extern Matrix	gradientFunc(double func(const double x), Matrix xin);

extern void gradient1D(double x[], double y[], double dydx[], int m);

extern void God_is_good();
#endif