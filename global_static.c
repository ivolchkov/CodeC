#include <stdio.h>

static int number = 500;//Global local variable

int main(void)
{
	extern int number;//Using global local variable
	printf("number = %d\n",number );
	extern int number2;//It will be placed in another file
	printf("number2 = %d\n",number2 );

}