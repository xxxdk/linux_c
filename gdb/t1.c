#include <stdio.h>

int add(int x, int y);

int main(void)
{
  int c;
  c = add(3, 7);
  printf("%d\n", c);

  return 0;
}

int add(int x, int y)
{
  return x + y;
}
