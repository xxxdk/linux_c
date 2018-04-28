#include <stdio.h>

void func(char str_arg[100])
{
  printf("func: %lu\n", sizeof(str_arg));
}

int main(int argc, char const *argv[]) {
  char str[] = "Hello";
  char *p = str;
  printf("str: %lu\n p: %lu\n", sizeof(str), sizeof(p));
  func("test");

  printf("char: %lu\n", sizeof(char));
  printf("short: %lu\n", sizeof(short));
  printf("int: %lu\n", sizeof(int));
  printf("long: %lu\n", sizeof(long));
  printf("float: %lu\n", sizeof(float));
  printf("long long: %lu\n", sizeof(long long));

  return 0;
}
