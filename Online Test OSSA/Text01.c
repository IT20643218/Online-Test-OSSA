/*parent process has to print child process id and its id and child has to print the parent id and its id.*/

//create header file
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

//Main function
int main (void){
        int pid;
        pid=fork();
        //child
        if(pid==0){
                printf("My id = %d\n",getpid());
                printf("My parent = %d\n",getppid());
        }

        //parent
        else{
                printf("My id = %d\n",getpid());
                printf("My parent = %d\n",getppid());
        printf("=======================================\n");
        }
        return 0;
}//end main
~           