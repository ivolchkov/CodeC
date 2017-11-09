#include <stdio.h>

int main(void)
{
	int a=20,b=10,c=4,d=8,e=3;
	/* int itog1=0,itog2=0;
	itog1=a + b - c * d / e;//more complicated
	printf("Itog:%d\n",itog1 );
	itog2=(a+b)-((c*d)/e);//more comfortable
	printf("Itog easier%d\n",itog2 );
	*/
	printf("Addition %d\n",a + b );
	printf("Substraction %d\n",a - b );
	printf("Multiplication %d\n", c * d);
	printf("Division %d\n", d / c);
	printf("Remainder division %d\n", a % c);
	printf("Increment %d\n",++a );
	printf("Postfix increment %d\n",b++ );
	printf("Result %d\n",b);
	printf("Decrement %d\n",--c );
	printf("Postfix decrement %d\n",e-- );
	printf("Result %d\n",e );

}