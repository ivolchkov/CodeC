#include <stdio.h>
#define SIZE 1000

int main ()
{
	enum DAYS {MONDAY=1,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY} days;
	printf("MONDAY =%d\n", MONDAY );
	printf("TUESDAY =%d\n", TUESDAY );
	printf("WEDNESDAY =%d\n", WEDNESDAY );
	printf("THURSDAY =%d\n", THURSDAY );
	printf("FRIDAY =%d\n", FRIDAY );
	printf("SATURDAY =%d\n", SATURDAY );
	printf("SUNDAY =%d\n", SUNDAY );

	int day = MONDAY+TUESDAY+WEDNESDAY+THURSDAY+FRIDAY+SATURDAY+SUNDAY;
	printf("Summ day =%d\n", day);

	int day2=MONDAY+TUESDAY;
	int day3=MONDAY+SUNDAY;
	printf("day2 =%d\n",day2 );
	printf("day3 =%d\n",day3 );
	typedef int MYTYPE;
	typedef char string[SIZE];
	MYTYPE myvar=100;
	printf("myvar=%d\n",myvar );
	string str[50]={"String STROKA"};
	printf("string - %s\n",str );
}