#include <stdio.h>


void pass_para(char *q, char w)
{
  printf("char *: %s\n", q);
  printf("char : %c\n", w);
}

int main(void)
{
  char *he = "hello";
  char le = 0x65;
  char *ar = "wer";
  pass_para(he, ar[0]);
}
