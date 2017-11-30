//for 
#include <stdio.h>
#include <string.h>
int main()
{
	printf("Write numbers from 1 to 10\n");
	for (int i=1;i<=10;i++)
	{
		printf("%d\n",i );
	}
	printf("\n");
	int str[]={1,2,3,4,5,6,7,8,9};
	for (int i = 0;i<9;i++)
	{
		printf("number[%d]= %d\n",i,str[i] );
	}
	printf("\n");
	char ch[7]={'Q','W','E','R','T','Y'};
	for (int j =0;j<strlen(ch);j++)
	{
		printf("%c",ch[j] );
	}
	printf("\n");
	char strin[] = {"My string"};
	for (int j=0;j<strlen(strin);j++)
		{
			printf("%c",strin[j] );
		}
		printf("\n");
}