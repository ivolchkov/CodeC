// pointers for struct
#include <stdio.h>

typedef struct 
{
	char *name;
	char *popn;
}City;

int main(int argc, char const *argv[])
{
	City ny,la,ch,*ptr;
	ny.name="New York";
	ny.popn="8,265,365";
	printf("\n%s,population - %s. \n",ny.name,ny.popn );

	ptr=&la;
	ptr -> name = "Los Angeles";
	ptr -> popn = "6,425,824";
	printf("\n%s,population - %s. \n",la.name,la.popn );

	ptr=&ch;
	ptr -> name = "Chikago";
	ptr -> popn = "3,879,365";
	printf("\n%s,population - %s. \n\n",ptr->name,ptr->popn );
	
}