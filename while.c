#include <stdio.h>

int main()
{
	fprintf(stdout,"Repeat a symbol\n");
	char ch='y';
	/*while (ch == 'y')
	{
		printf("Do u want to repeat this? (y/n)\n");
		scanf("%s", &ch);
	}
	printf("A bit tired ? :)\n");*/
	do 
	{
		printf("Do u want to repeat this? (y/n)\n");
		scanf("%s", &ch);	
	} while(ch == 'y');
}
