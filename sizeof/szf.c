#include <stdio.h>

void func(char *str_arg)
{
  printf("func: %lu\n", sizeof(str_arg));
}

int main(int argc, char const *argv[]) {
  // char str[] = "Hello";
  char str[] = {'H','E','L','L','O'};
  char *p = str;
  printf("str: %lu\n p: %lu\n", sizeof(str), sizeof(p)); //6 8
  func("test"); // 8

  printf("char: %lu\n", sizeof(char));  //1
  printf("short: %lu\n", sizeof(short));  //2
  printf("int: %lu\n", sizeof(int));  //4
  printf("long: %lu\n", sizeof(long));  //8
  printf("float: %lu\n", sizeof(float));  //4
  printf("double: %lu\n", sizeof(double));  //4
  printf("long long: %lu\n", sizeof(long long));  //8

  return 0;
}
