#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>


void printids(const char *s)
{
  pid_t pid;
  pthread_t tid;
  pid = getpid();
  tid = pthread_self();
  printf("%s pid %lu, tid %lu, (%#lx)\n",
    s, (unsigned long)pid, (unsigned long)tid, (unsigned long)tid);
}

void *thread_func(void *arg)
{
  printids("new thread: ");
  return ((void *)0);
}

int main(void)
{
  int err;
  pthread_t tid;
  err = pthread_create(&tid, NULL, thread_func, NULL);
  if(err != 0){
    fprintf(stderr,"%s","create thread fail\n");
    exit(-1);
  }
  printids("man thread: ");
  sleep(1);
  return 0;
}
