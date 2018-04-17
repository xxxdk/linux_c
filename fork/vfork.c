#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int i = 10;

int main(void)
{
  pid_t pid;
  pid = vfork();
  if(pid == -1){
    printf("vfork err\n");
    exit(EXIT_FAILURE);
  }else if(pid == 0){
    i++;
    printf("child:i=%d\n", i);
    exit(0);
  }else{
    sleep(1);
    printf("parent:i=%d\n", i);
    return 0;
  }
}
