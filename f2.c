//logic of our program
#include <stdio.h>
void print_str()
{
	fprintf(stdout, "Use our function print_str\n" );
}

void print_str_arg(char str[])
{
	fprintf(stdout, "Use our function with argument: %s\n",str );
}

int summ(int n1,int n2)
{
	return n1+n2;
}
