//operator switch()...case:...;break;
#include <stdio.h>

int main()
{
	fprintf(stdout,"Here you can choose a film to discribe it\n" );
	fprintf(stdout, "1. Harry Potter and a secret room.\n" );
	fprintf(stdout, "2. Captain America:The Civil war.\n" );
	fprintf(stdout, "3. Thor 3.Ragnarok.\n" );
	fprintf(stdout, "4. Doctor Strange.\n" );
	int number=0;
	fscanf(stdin,"%d",&number);
	switch (number){
		case 1 : fprintf(stdout, "This film tells us about a mysterious story of a boy with a scar on his forehead.\n" );
		break;
		case 2 : fprintf(stdout, "The story of a conflict Iron Man and Captain America and first coming of Spidy\n" );
		break;
		case 3  : fprintf(stdout, "The third part of marvelous saga of thunder`s god Thor and his battle vs Hella.\n" );
		break;
		case 4 : fprintf(stdout, "Magic and rising of a new mage,surgeon Doctor Steven Strange.\n" );
		default:("You write a wrong number.\n");}
		fprintf(stdout, "Have a nice watching :)\n" );
}