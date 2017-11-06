#include <stdio.h>

int main ()
{
	int age,weight;
	char name[50];
	printf("Please write your name: " );
	scanf("%s", name);
	printf("Please write your age: ");
	scanf("%d", &age);
	printf("Please write your weight: ");
	scanf("%d", &weight);
	printf("Here is your information: \n");
	printf("Your name:%s,your age: %d y.o.,your weight - %d kg. \n",name,age,weight);
	printf("This is an adress variable of name with our name in computer memory - %p \n", &name);

}