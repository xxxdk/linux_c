#include <stdio.h>
#include <stdlib.h>
#include "memwatch.h"

int main(void)
{
  char *ptr1;
  char *ptr2;
  ptr1 = (char *)malloc(512);
  ptr2 = (char *)malloc(512);
  // ptr2 = ptr1;
  free(ptr1);
  free(ptr2);
  ptr1 = NULL;
  ptr2 = NULL;
  return 0;
}
