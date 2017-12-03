// break; continue; goto;
#include <stdio.h>

int main ()
{
	printf("Use operators \"break\" , \"continue\" , \"goto\"\n");
	for (int i=0;i<=10;i++)
	{
		if (i==5) 
			goto metka;//break;continue
		fprintf(stdout, "%d\n",i );
	}
	metka:
	printf("Using goto\n");
}