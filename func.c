// function
#include <stdio.h>
void hello_func();//prototype
int add_num();
char str();

int main()
{
	hello_func();
	int num=add_num();
	fprintf(stdout, "return a+b - %d\n", num);
	str();
}

void hello_func()
{
	fprintf(stdout, "hello function!\n");
}

int add_num()
{
	int a=30,b=25;
	return a+b;
}

char str()
{
	int a=40,b=25;
	fprintf(stdout, "Number a+b - %d\n",a+b );
}