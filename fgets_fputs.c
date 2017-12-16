// Using functions fgets and fputs
#include <stdio.h>
#define SIZE 51

int main ()
{
	char massiv[SIZE];
	printf("Write a string: ");
	//fscanf(stdin,"%[^\n]",massiv);
	//fprintf(stdout, "%s\n", massiv);
	fgets(massiv,50,stdin);
	fputs(massiv,stdout);
	char symbol = 'A';
	for(;symbol <= 'Z';symbol++)
		printf("%c",symbol );
	printf("\n");
	char symbol_i='I';
	symbol_i +=32;
	printf("%c\n",symbol_i );
}