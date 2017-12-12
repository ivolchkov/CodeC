// Working with pointer
#include <stdio.h>
#include <string.h>
#define SIZE 10

int main ()
{
	int number = 15;
	int *p_number;
	p_number=&number;
	fprintf(stdout, "number of pointer = %d\n",*p_number );

	int *p_mass_number;
	int massiv[]={1,2,3,4,5,6,7,8,9,10};
	p_mass_number=massiv;
	for(int i=0;i<SIZE;i++)
	{
		fprintf(stdout, "Vary = %d,Number in massiv = %d,Adress = %p\n",*p_mass_number,i,p_mass_number );
		*p_mass_number++;
	}
	char *p_mass_char;
	char string[]="Igor";
	p_mass_char = string;
	for (int i = 0;i<strlen(string);i++)
	{
		if (*p_mass_char == 'I')
			*p_mass_char = 'i';

		fprintf(stdout, "%c",*p_mass_char );
		*p_mass_char++;
	}
	fprintf(stdout, "\n");
}