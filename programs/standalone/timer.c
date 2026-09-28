#include <stdio.h>
#include <unistd.h>

int main()
{
    int start;

    do
    {
        printf("Need Number to start the countdown (1 - 100): ");
        scanf("%d",&start);
    }
    while(!(start<100));

    do
    {
        printf("T-minus %d\n",start);
        start--;
        sleep(1);
    }
    while(start>0);

    printf("Zero!\nBlast Off!\n");
    return(0);
}