#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* creation(void *args) {
    int loc_id = * (int *) args;
    printf("Hello world from thread # %d\n", loc_id);
    return 0;
}

int main()
{
  pthread_t tid;
  for (int i = 0; i < 3; ++i) {
    void *pointer = &i;
    pthread_create(&tid, NULL, creation, &i);
    printf("Thread has been created %d\n", i);
    pthread_join(tid,NULL);
    printf("Thread %d finished\n", i);

  }
}
