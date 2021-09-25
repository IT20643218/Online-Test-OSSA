/Header file
#include<stdio.h>
#include<unistd.h>

//Main function
int main(){

        int pid = fork();

        if (pid == 0)
        {
                printf("Parent id = %d\n",getppid());

                sleep(50);//create orphan process
        }

        return 0;
}//end main function        
~   