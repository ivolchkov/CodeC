//Working with random numbers 
//srand() and rand() 0..32767
//High average of number rand() % 9 0..9
//Low average (rand() % max_number) + min_number Min_number..max_number
//or rand() % (max_number - min_number + 1)+ min_number
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int temp,r,nums[51];
    char buf[6],str[51]={"Your six lucky numbers: "};
    srand(time(NULL)); //Zerno
    for (int i=0;i<50;i++)
    nums[i]=i;
    for (int i=1;i<50;i++)
    {
        r=(rand() % 49) +1;
        temp=nums[i];
        nums[i]=nums[r];//shuffling our numbers
        nums[r]=temp;
    }
    for (int i=1;i<=6;i++)
    {
        sprintf(buf,"%d",nums[i]);//change integer to string
        strcat(buf," ");//adding spaces to our numbers
        strcat(str,buf);//conecting our strings
    }
    fprintf(stdout,"\n%s\n\n",str);

}
