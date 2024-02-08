//============================================================
// file: main.cpp
//============================================================
#include <iostream>
#include <cstring>
#include <initializer_list>
#include <cassert>

//MATRIX and VECTOR classes assignment
#include "vector3dT.h"
#include "matrix3dT.h"

int main(int argc, const char * argv[]) {
  vector3D::run_tests();
  matrix3D::run_tests(); 
  return 0;
}

// PROGRAM OUTPUT
// ====================  TESTING VECTORS  ========================
// u.name_ is: u
// <u,   1   2   4   0>
// <u,   1   2   4   0>
// <v,   8  16  32   0>
// <i,   1   0   0   0>
// <j,   0   1   0   0>
// <k,   0   0   1   0>
// j + k is: <j+k,   0   1   1   0>
// <i*3.000000+j*4.000000-k*2.000000,   3   4  -2   0>
// *** asserting u == u and u != v
// *** asserting u + v == v + u   and  u - v == -(v - u)    and   -(-u) == u
// *** 3.0 + u == u + 3.0   and   3.0 * u == u * 3.0
// *** asserting u - 3.- == -(3.0 - u)
// *** asserting 5.0 * u == u * 5.0
// *** asserting u + vector3D::zero() == u
// *** asserting i.dot(j) == j.dot(k) == k.dot(i) == 0
// *** asserting i.cross(j) == k   and  j.cross(k) == i   and   k.cross(i) == j
// *** asserting u.cross(v) == -v.cross(u)
// i.angle(j) is: 1.57
// pi/2 is: 1.57
// *** asserting i.angle(j) == j.angle(k) == k.angle(i) == M_PI/2
// <u,   1   2   4   0>
// <u*0.218218, 0.218 0.436 0.873   0>
// length of uhat.mag() is... 1
// *** asserting u.hat.mag() - 1.0 < 1.0e-10
// ...test vectors assertions passed
// ====================  FINISHED testing vectors  ========================
//
//
// ====================  TESTING MATRICES  ====================================================
// so far so good
// test copy constructor -- program will crash at end if this is incorrect
// test copy constructor using =  -- program will crash at end if this is incorrect
// test assignment operator  -- program will crash at end if this is incorrect
// test negative unary operator
// test determinant
// |a| = 10.00
// |b| = 1.00
// test minors
// test cofactor
// test adjoint
// test inverse
// test a * ainv, b * binv
// test a * ainv == id
// IDENTITY
// test a.transpose().tranpose() == a
// test a.determinant() == a.transpose().determinant()
// test a + b == b + a
// test a - b == -(b - a)
// test 3.0 + a == a + 3.0
// test 3.0 * a == a * 3.0
// test a + 3.0 - 3.0 == a
// test a * 3.0 / 3.0 == a
// -(-a) == a
// test matrix(1 2 3   4 5 6   7 8 9) has determinant 0
// testing matrix vector multiplication
// asserting that p *  stop reason = EXC_BREAKPOINTm == m * p
// asserting that q * n == n * q
//
//
// ...test matrices assertions passed
//
// ====================  FINISHED testing matrices  ============================================
//

