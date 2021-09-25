//Header file
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

//main function
int main(void)
{
        int pid;
        pid = fork();
        if (pid == 0){
                printf("My id = %d\n",getpid());
                printf("My parent id = %d\n",getppid());
        }
        else{
                printf("My id = %d\n",getpid());
                printf("My parent id = %d\n",getppid());

                wait(NULL);//avoid creating zombi process
        }
        return 0;
}//end main function