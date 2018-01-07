//working with function qsort
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int num_sort(const void *a,const void *b);
int char_sort(const void *a,const void *b);

int main()
{
    int sort_num[]={3,4,6,7,9,1,5,2,0,10,8};
    char *sort_string[]={"Alex","Igor","Maxim","Dmitriy","Oleg"};
    qsort(sort_num,11 ,sizeof(int),num_sort);
    printf("Sort our numbers: \n");
    for (int i=0;i<11;i++)
    fprintf(stdout,"%d ",sort_num[i]);
    printf("\n");
    qsort(sort_string,5,sizeof(char*),char_sort);
    printf("Sort our names: \n");
    for (int i=0;i<5;i++)
    fprintf(stdout,"%s ",sort_string[i]);
    printf("\n");


}

int num_sort(const void *a,const void *b)
{
    int x= *(int*)a;
    int y = *(int*)b;
    return x-y;
}

int char_sort(const void *a,const void *b)
{
    char **x = (char**)a;
    char **y = (char**)b;
    return strcmp(*x,*y);
}