//Outout time and date
#include <stdio.h>
#include <time.h>

int main()
{
    time_t tm=time(NULL);
    fprintf(stdout,"\nTime and date : %s\n",ctime(&tm));

}