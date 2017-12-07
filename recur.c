//recursion
#include <stdio.h>

void recur (int number);

int main ()
{
	int number;
	fprintf(stdout, "Write a number for recursion: ");
	fscanf(stdin,"%d",&number);
	recur(number);
	puts("Recursion is over");
}

void recur (int number)
{
	fprintf(stdout, "%d\n",number );
	number--;
	if (number<0)
		return;
	else 
		recur(number);
}