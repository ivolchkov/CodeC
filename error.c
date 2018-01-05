// working with error declarations using functions perror() and strerror()
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    /*FILE *file_ptr;
    file_ptr = fopen("nosuch_file.txt","r");
    if (file_ptr != NULL)
    {
        fprintf(stdout,"File was succesful read!");
    
    }
    else 
    perror("Error");*/
    for (int i;i<50;i++)
    fprintf(stdout,"Error №%d , %s\n",i,strerror(i));
}