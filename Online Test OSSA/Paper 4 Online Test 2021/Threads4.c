#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#define Num_threads 2
void * thread1()
{
        int i =0;
        while(i<101){
          int squar = i * i;
          printf("Square number %d is :%d\n",i+1,squar );
          i++;
        } 
}

void * thread2()
{
        int x =0;
        while(x<5){
          int cube = x * x * x;
          printf("Cubic number %d is :%d\n",x+1,cube );
          x++;
        }   
}
int main()
{
        pthread_t tid1;
        pthread_t tid2;

        pthread_create(&tid1,NULL,thread1 ,NULL);
        pthread_join(tid1,NULL);

        printf("Waiting for thread 1 to finished \n");
        
        pthread_create(&tid2,NULL,thread2 ,NULL);
        pthread_join(tid2,NULL);
        
}
