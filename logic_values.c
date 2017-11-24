#include <stdio.h>

int main ()
{
	int yes = 1,no = 0;
	printf("\n");
	printf("Logic values yes && no - %d\n",yes & no );
	printf("Logic values yes && yes - %d\n",yes & yes );
	printf("Logic values no && no - %d\n",no & no );
	printf("Logic values yes || no - %d\n",yes || no );
	printf("Logic values no || no - %d\n",no || no );
	printf("Logic values yes || yes - %d\n",yes || yes );
	printf("Logic values !yes - %d\n", !yes );
	printf("Logic values !no - %d\n", !no );





}