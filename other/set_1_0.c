#include <stdio.h>

#define BIT3  (0x1 << 3)

volatile static int a = 3;

void setbit()
{
  a |= BIT3;
}
void cleanbit()
{
  a &= ~BIT3;
}

int main(void)
{
  setbit();
  printf("%#x\n", a);
  cleanbit();
  printf("%#x\n", a);
  return 0;
}
