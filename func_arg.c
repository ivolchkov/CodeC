//function with arguments
#include <stdio.h>
#define SIZE 50

void string(char str[]);
int summ( int num1 ,int num2);
int cube(int x);

int main ()
{
	int num1=40,num2=50,cu=5;
	int itogo;
	itogo=num1+num2;
	char str[SIZE]="I am an argument";
	string(str);
	fprintf(stdout, "Summ int1+int2: %d\n",itogo );
	fprintf(stdout, "cube:%d\n", cube(cu) );

}

void string(char str[SIZE])
{
	fprintf(stdout, "I am function: %s\n",str );
}

int summ(int num1 ,int num2)
{
	return num1+num2;
}

int cube(int x)
{
	return (x*x)*x;
}