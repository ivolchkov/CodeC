#include <stdio.h>

int main ()
{
	int num,vum,tum;
	char letter='A',let='a';
	printf("Write variable num =\n");
	scanf("%d",&num);
	printf("Write variable vum =\n");
	scanf("%d",&vum);
	printf("Write variable tum =\n");
	scanf("%d",&tum);
	
	getchar();
	printf("Here is num = %i\n",num );
	printf("Here is vum = %i\n",vum );
	printf("Here is tum = %i\n",tum );

	printf("If num > vum,write 1-true,2-false,value=%d, \n",num > vum);
	printf("If vum < tum,write 1-true,2-false,value=%d \n",vum < tum);
	printf("If A == a,write 1-true,2-false,value=%d \n",letter==let);
	printf("If num != tum,write 1-true,2-false,value=%d \n",num != tum);
	num++;
	printf("New num=%i\n",num );
	printf("If tum <= vum,write 1-true,2-false,value=%d \n",tum <= vum);
	printf("If num == tum==vum,write 1-true,2-false,value=%d \n",num == tum==vum);





}