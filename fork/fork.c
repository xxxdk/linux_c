#include <stdio.h>
#include <unistd.h>

int main(void)
{
  pid_t pid;
  printf("hello world\n");
  pid = fork();

  if(pid == 0){
    printf("child curpid:%d \n parentpid:%d\n", getpid(), getppid());
    return 0;
  }
  sleep(1);
  printf("parent curpid:%d \n parentpid:%d\n", getpid(), getppid());

  return 0;
}
