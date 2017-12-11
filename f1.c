//main program
#include <stdio.h>
#include "f2.h"
#define SIZE 100

int main ()
{
	int b=120,c=250;
	char str[SIZE]="We are programing on C language!";
	print_str();
	print_str_arg(str);
	int a=summ (b,c);
	fprintf(stdout, "Our result for adding n1+n2= %d\n",a );

} 