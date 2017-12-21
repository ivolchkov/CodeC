// Working with functions strstr () and strcmp()

#include <stdio.h>
#include <string.h>
int function();

int main()
{
	char str[]="Time is always good";
	char sub[]="Time";
	if (strstr(str,sub) ==NULL)
	{
		fprintf(stdout, "'%s' is not found in string - '%s'\n", sub,str);
	}
	else
	{
		fprintf(stdout, "'%s' is found in string - '%s',and it`s adress - %p\n",sub,str,strstr(str,sub) );
		fprintf(stdout, "'%s' - has index - %d\n",sub,strstr(str,sub)-str );
	}
	function();
}
	
function()
{
	char password[]="pass";
	char ps[20];
	do
	{
	printf("Write a password: \n");
	fscanf(stdin,"%s",ps);
	
}while(strcmp(password,ps) != 0);
{
	printf("Password is true\n");
	return 0;
}
}