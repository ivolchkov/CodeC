#include <stdio.h>
#define SIZE_STR 100

char string(char *p_char);

int main ()
{
	char str[SIZE_STR];
	char *p_char=str;
	fprintf(stdout, "Write a string for shifr :\n" );
	fgets(str,SIZE_STR,stdin);
	string(str);
	fprintf(stdout, "Here is your string: %s\n",str );
	fprintf(stdout, "Here is your string for unshifring: %s\n",str );
	string(str);
	fprintf(stdout, "Here is your string: %s\n",str );

}

char string(char *p_char)
{
	while (*p_char)
	{
		*p_char = *p_char ^ 31;
		*p_char++;
	}
}