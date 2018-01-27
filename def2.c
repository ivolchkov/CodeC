//Problem with #define and const
#include <stdio.h>
#define TWO_ARG 1024+1024//for right result need to put 1024+1024 into () or in function main put TWO_AGR into ()

int main()
{
    int num2 = TWO_ARG*2;
    fprintf(stdout,"Result for #define : %d\n",num2);
    const  int num3 = 1024+1024;
    int num4 = num3*2;
    fprintf(stdout,"Result for const : %d\n",num4);


}