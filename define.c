#include <stdio.h>
#define SUM(a,b) (a+b)*2
#define P 2
int main ()
{
	int a,b,k,m,c,d;
	k = 3;
	m = 5; 
	a = 3 ;
	b = 5 ;
	c =(k+m)*2;
	d = SUM(a, b);
	printf("a=%d,b=%d\n",a, b);
	printf("c=%d,d=%d\n",c, d);
	#if P==1
	printf("First branch doing and P=%d\n",P );
	#elif P==2
	printf("Second branch doing and P=%d\n",P );
	#else 
	printf("Nothing will happen and P=%d\n",P );
	#endif
	getchar();
	#undef P
	#define P 5000
	printf("New P=%d\n",P );







}