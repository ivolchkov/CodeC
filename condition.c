#include <stdio.h>

int main ()
{
	int x,cat=1;
	printf("Write x =\n");
	scanf("%d",&x);
	(x % 2) ? printf("Not even\n"):printf("Even \n");
	printf("There %s %d %s on the window.\n",(cat==1)?"was":"were",cat,(cat==1)?"cat":"cats" );
	++cat;
	printf("There %s %d %s on the window.\n",(cat==1)?"was":"were",cat,(cat==1)?"cat":"cats" );





}