#include <stdio.h>

extern float foo();

int main(int argc, char const *argv[]) {
  // int c = addRecursive(8, 16);
  float x = foo();
  //std::cout << "c = " << x << std::endl;
  printf("return from foo: %f\n",x);
  return 0;
}