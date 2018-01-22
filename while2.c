// working with short function "while" and command %m

#include <stdio.h>

int main()
{
    int num1 = 10,num2 = 10;

    while(num1>=0)
    {
        printf("Number is decreasing: %d\n",num1);
        num1--;
    }
    printf("Another type of function while\n");
    while(num2-->0)
    printf("Number is decreasing: %d\n",num2);
    printf("%m\n");
}