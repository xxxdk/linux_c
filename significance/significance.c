#include <stdio.h>


int main(int argc, char const *argv[])
{
  int i;
  float f;
  double d;
  long l;

  i = 123456789;
  f = 1234567.234567;
  d = 1234567891.23456789;
  l = 123456789123456789;

  printf("int %d\nfloat %f\ndouble %.10lf\nlong %ld\n", i, f, d, l);

  return 0;
}
