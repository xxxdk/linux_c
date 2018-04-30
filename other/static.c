#include <stdio.h>

static int i;

void ert()
{
  ++i;
}

int main(void)
{
  printf("start:%d\n", i);
  i = 8;
  ert();
  ++i;
  printf("end:%d\n", i);
  return 0;
}
