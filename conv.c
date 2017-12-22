// using convertations with strings and functions
#include <stdio.h>
#include <stdlib.h> 

int main()
{
	char s1[20]="12Computer",s2[20]="-36My homework",s3[20]="125",s6[20],s7[20],s8[20];
	int num1,num2,num3;
	//atoi
	num1=atoi(s1);
	printf("In string '%s',we find number - %d \n",s1,num1 );
	num2=atoi(s2);
	printf("In string '%s',we find number - %d \n",s2,num2 );
	num3=atoi(s3);
	printf("In string '%s',we find number - %d \n",s3,num3 );
	//sprintf
	sprintf(s6,"%o",num1);
	printf("We converted num1 = %d , into 8 byte code - %s\n",num1,s6 );
	sprintf(s7,"%x",num2);
	printf("We converted num1 = %d , into 16 byte code - %s\n",num2,s7 );
	sprintf(s8,"%d",num3);
	printf("We converted num1 = %d , into 10 byte code - %s\n",num3,s8 );
	//itoa
	//itoa(250,s2,8);
}