// functioms strcat and strncat
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main ()
{
	char str1[SIZE]="I am learning";
	char str2[]=" programming on C language!";
	char str3[SIZE]="I congratulate you";
	char str4[]=" with Christmas and Happy New Year!";
	char str5[SIZE]="We are writting code";
	char str6[]=" on programming area Linux!";
	strcat(str1, str2);
	fprintf(stdout, "%s\n",str1 );
	strncat(str3, str4,35);
	fprintf(stdout, "%s\n",str3 );
	strncat(str5, (str6+3),23);
	fprintf(stdout, "%s\n",str5 );



}