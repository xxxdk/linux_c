#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *thread_routine1(void *arg)
{
  printf("t1 hello\n");
  sleep(1);

  return NULL;
}

void *thread_routine2(void *arg)
{
  printf("t2 i'm running\n");
  pthread_t main_thread = (pthread_t)arg;

  pthread_detach(pthread_self());
  if(!pthread_equal(main_thread, pthread_self())){
    printf("th2 main thread id is not equal th2\n");
  }
  pthread_join(main_thread, NULL);
  printf("th2 main thread exit\n");

  printf("th2 exit\n");
  printf("th2 process exit\n");

  pthread_exit(NULL);
}

int main(int argc, char **argv)
{
  pthread_t t1, t2;
  if(pthread_create(&t1, NULL, thread_routine1, NULL) != 0){
    printf("create thread fail\n");
    exit(-1);
  }
  pthread_join(t1, NULL);
  printf("main thread t1 terminated\n");

  if(pthread_create(&t2, NULL, thread_routine2,(void *)pthread_self()) != 0){
    printf("create thread fail\n");
    exit(-1);
  }

  printf("main thread sleeping\n");
  sleep(3);
  printf("main thread exit\n");
  pthread_exit(NULL);
  printf("main thread never reach here\n");
  return 0;
}
