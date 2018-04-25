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

  return 0;
}
