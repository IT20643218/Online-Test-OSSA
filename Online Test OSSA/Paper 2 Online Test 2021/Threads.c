#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#define Num_thread1 2

//child thread1
void * thread1()
{
        int i =0;
        while (i <101){
          printf("Even Number :%d\n",i);
          i = i+2;
        }   
}

//main function
int main()
{
        pthread_t tid[Num_thread1];
        for (int i =0;i<Num_thread1;i++){
            pthread_create(&tid[i],NULL,thread1 ,NULL);

            printf("I am thread, my id is :%d\n",i);
        }
        for (int i =0;i<Num_thread1;i++){
             pthread_join(tid[i],NULL);
        }

      
}
