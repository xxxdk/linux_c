#include <stdio.h>
#include "public.h"
#include "static_p.h"

static int i;
int d;

void ert()
{
  ++i;
  d = 9;
  static int gv = 6;
  printf("%d\n", gv);
}

int main(void)
{
  gv = 4;
  static int d = 6;
  printf("start:%d\n", i);
  i = 8;
  ert();
  ++i;
  printf("end:%d %d\n", i, d);

  qsd();
  printf("%d\n", gv);

  return 0;
}
