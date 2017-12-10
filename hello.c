// Comparing with hello2.c
#include <stdio.h>
#define SIZE 20

int main()
{
	char str[SIZE];
	fprintf(stdout, "Please,write your name:" );
	fscanf(stdin,"%20s",str);
	printf("Your name is %s\n",str );
}