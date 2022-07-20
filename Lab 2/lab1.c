#include <stdio.h>
#include <unistd.h>

int main(){

    int i;
    int k=2;
    int pid;
    for(i=1;i<=k;i++)
    {
        pid = fork();
        printf("Hello world!\n");
    }

    return 0;
}