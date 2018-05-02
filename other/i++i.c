#include <stdio.h>

void main(void)
{
  int i = 2, b = 1, c;
  printf("%d\n", i = i++ + ++i);
  c = b++;
  printf("%d %d\n", c, b);
}
