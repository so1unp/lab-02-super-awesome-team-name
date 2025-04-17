#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void){
    int i = fork();
    if (i != 0) {
        // Parent process
        printf("Parent process: PID = %d\n", getpid());
        sleep(10);
    } else {
        // Child process
        printf("Child process: PID = %d\n", getpid());
        sleep(10);
    }
    exit(EXIT_SUCCESS);
}