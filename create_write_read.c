// working with files using FILE,fopen,fclose
#include <stdio.h>
#define LEN 100

int main ()
{
    char name[LEN]={"\nby a newbie programmer I.Volchkov"};
    char str[LEN];
    FILE *file_ptr;
    file_ptr = fopen("new_file.txt","r+a");
    //r-read,w-write,a-adding text,r+,a+,rb,wb modes

    

   if (file_ptr != NULL )
   {
       printf("File creating is complitted!\n");
       printf("---Read the database!\n");
        while (fgets(str,LEN,file_ptr))
        fprintf(stdout,"\n%s",str);
        printf("\n---Database was read\n");
        fputs(name,file_ptr);
   }
   else
   {
       fprintf(stderr,"File is not created!\n");
       return 1;
   }
} 