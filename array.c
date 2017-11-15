#include <stdio.h>

int main ()
{
	char string [7]={'S','t','i','n','g','\0'};
	char array []={"Stroka"};
	int number [4];//= {10,50,100,250}
	number[0]=10;
	number[1]=50;
	number[2]=100;
	number[3]=250;
	for (int i = 0; i < 7; i++)
	{
		printf("%c",array[i] );

	}
	printf("\n");
	for (int j = 0; j < 7; j++)
	{
		printf("%c",string[j] );
	}
	printf("\n");
	printf("1 number 10 = %d\n", number[0]);
	printf("2 number 50 = %d\n", number[1]);
	printf("3 number 100 = %d\n", number[2]);
	printf("4 number 250 = %d\n", number[3]);
}