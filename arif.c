#include <stdio.h>

int main()
{
//For example write a program for computing this formula k=(m+1)-(n-1-c)
int k=0,m=20,n=8,c=4;
/*++m;//first variant
m=m+1;//second vatiant
//int nc1=(--n)-c;
int nc1=n-1-c;
k=m-nc1;
printf("k=%d\n", k);*/
printf("k=%d\n", k=(m+1)-(n-1-c)); //fast variant


}