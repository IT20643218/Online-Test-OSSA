//create main function
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void * thread1()
{
        int i;
        i=1;
        while(i<10){
                printf("%d\n",i*i*i);
                i=i+1;
        }
        printf("Hello World!!\n");
}
int main(){
        int i;
        pthread_t tid1;
        pthread_create(&tid1,NULL,thread1,NULL);
        printf("Main Thread id is %ld\n",pthread_self());
        pthread_join(tid1,NULL);
        return 0;
}