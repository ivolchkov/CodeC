//if..else
#include <stdio.h>

int main ()
{
	int number;
	printf("Please write number=\n");
	scanf("%d",&number);
	number+=2;//number increased +2
	printf("increased number +2 =%d\n",number );
	if ((number>0)&&(number<10))
		printf("Number diapazon 10\n");
	else if ((number>10)&&(number<20))
		printf("Number diapazon 20\n");
	else if ((number>20)&&(number<30))
		printf("Number diapazon 30\n");
	else 
		printf("Number is more than 30\n");
}

