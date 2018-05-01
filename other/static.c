#include <stdio.h>

static int i;
int d;

void ert()
{
  ++i;
  d = 9;
}

int main(void)
{
  static int d = 6;
  printf("start:%d\n", i);
  i = 8;
  ert();
  ++i;
  printf("end:%d %d\n", i, d);
  return 0;
}
