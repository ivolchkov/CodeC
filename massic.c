#include <stdio.h>

int main ()
{
	int massiv [2][3]={{'A','B','C'},
						{10, 20 , 30}};//mnogomerniy massiv
	printf("1 stroka\n");
	printf("1 element [0][0] - %c\n",massiv[0][0] );
	printf("2 element [0][1] - %c\n",massiv[0][1] );
	printf("3 element [0][2] - %c\n",massiv[0][2] );
	printf("2 stroka\n");
	printf("1 element [1][0] - %d\n",massiv[1][0] );
	printf("2 element [1][1] - %d\n",massiv[1][1] );
	printf("3 element [1][2] - %d\n",massiv[1][2] );
	printf("\n");
	massiv[1][0]=100;
	massiv[1][1]=200;
	massiv[1][2]=300;
	printf("1 element [1][0] - %d\n",massiv[1][0] );
	printf("2 element [1][1] - %d\n",massiv[1][1] );
	printf("3 element [1][2] - %d\n",massiv[1][2] );
	printf("\n");
	




}