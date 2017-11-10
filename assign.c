#include <stdio.h>

int main(void)
{
	int a=10,b=20;
	printf("Addiction a+=b (10+20) a=%d\n", a+=b ); // a=a+b a=10+20=30;
	printf("Substraction a-=b (30-20) a=%d\n", a-=b );// a=a-b a= 30-20=10;
	printf("Multiplying a*=b a=%d\n", a*=b );//a=a*b a=10*20=200;
	printf("Division a/=b a=%d\n",a/=b );//a=a/b a=200/20=10;
	printf("Remainded division a%%=b a=%d\n",a%=b );//a=a%b a=10%20=10;

}