//Header file
#include<stdio.h>
#include<unistd.h>

//main function 
int main(){

        int pid = fork();

        if (pid == 0){
                for (int i =1 ; i < 100; i += 2)
                {
                        printf("Odd Numbers = %d\n",i);
                }

        }
        return 0;
}//end main function
~ 