// pointer in struct
#include <stdio.h>

typedef struct 
{
	char str[5];
} Arrtype;

typedef struct 
{
	char *str;
}Ptrtype;

Arrtype arr = {'B','A','D','!','\0'};
Ptrtype ptr = {"Good!"};

int main ()
{
	printf("Massiv: %s",arr.str );
	char *ukazatel = "Idea";
	for (int i=0;i<5;i++)
		arr.str[i] = *ukazatel++;
	printf("%s\n", arr.str);
	printf("With pointer: %s", ptr.str );
	ptr.str="Idea";
	printf("%s\n",ptr.str);
} 