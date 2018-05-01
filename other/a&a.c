#include <stdio.h>

void rwst(int *a, int col, int m, int n)
{
  printf("%d\n", a[m*col+n]);
}

int main(void)
{
  int a[5] = {11,22,33,44,55};
  int *ptr = (int *)(&a + 1);

  int b[2][4] = {{10,20,30,40},{1,2,3,4}};
  int *qtr = (int *)(&b + 1);

  printf("%d %d\n", *(a+1), *(ptr-1));

  printf("%d %d\n", *((*b)+1), *(qtr-1));

  rwst((int *)b, 4, 1 ,0);

  return 0;
}
