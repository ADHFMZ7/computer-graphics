#include "vector3d_T.h"
#include "matrix3d_T.h"
#include "quaternion_T.h"
#include <iostream>

void test_quaternions() {
    printf("\n====================  TESTING QUATERNIONS  ========================");
    quatD::run_tests();
    printf("...test_matrices_and_vectors assertions passed");
    printf("====================  FINISHED testing quaternions  ========================");
}

int main(int argc, const char * argv[]) {
//  test_vectors();
//  test_matrices();
//  test_matrices_and_vectors();
  test_quaternions();
  return 0;
}
