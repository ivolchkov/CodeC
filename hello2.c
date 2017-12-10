#include <stdio.h>
#define SIZE 40


int main()
{
	char str[SIZE];
	fprintf(stdout, "Please,write your name:" );
	fscanf(stdin,"%30s",str);
	printf("Your name is %s\n",str );
}