#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#define Num_threads 2

//child threads
void * thread1()
{
        int i =1 ;
        while(i<101){
          int square =i*i;
          printf("Square number %d is %d\n",i+1,square);
          i++;
        }   
}

int main()
{
        pthread_t tid1[Num_threads];
        for (int x=0;x<Num_threads;x++){
            pthread_create(&tid1[x],NULL,thread1 ,NULL);
        }

        for (int x=0;x<Num_threads;x++){
          pthread_join(tid1[x],NULL);
        }
        
        int n ,i = 1;
        printf("Enter number of range :");
        scanf("%d",&n);
        while(i<n){
          printf("Cubic number is: %d\n",i*i*i);
          i++;
        }
       
}
