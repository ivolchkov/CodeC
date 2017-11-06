#include <stdio.h>

int main ()
{
	char letter = 'A';
	int decimal = 100;
	double number = 5.586;
	printf("%c - one symphol\n",letter );
	printf("%g - decimal,%d - number\n",number,decimal );
	printf("%06.2g - cool\n",number );

}