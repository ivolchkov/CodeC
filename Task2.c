#include <stdio.h>
#include <math.h>

int main()
{
    int n,k,x;
    int y[n];
    printf("Write the power degree \"k\":");
    fscanf(stdin,"%d",&k);
    fprintf(stdout,"Write number of \"N\":");
    fscanf(stdin,"%d",&n);
    int sum = 0;
    for (int i = 1;i<=n;i++)
    {
        x = pow(i,k);
       
        sum = sum + x;
    }

    fprintf(stdout,"Here is your answer: %d\n",sum);
}