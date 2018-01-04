// working with functions fread,fwrite
#include <stdio.h>
#define LEN 1001


int main()
{   
    int num;
    char massiv[LEN];
    FILE *new_ptr;
    FILE *copy_ptr;

    new_ptr = fopen("new_file.txt","r");
    copy_ptr = fopen("copy_ptr.txt","w");

    //fread(massiv, 1,LEN,new_ptr)
    //fwrite(massiv, 1 ,LEN,copy_ptr)
    if ((new_ptr != NULL) && (copy_ptr !=NULL) )
    {
        num = fread(massiv, 1,LEN,new_ptr);
        fwrite(massiv, 1,num,copy_ptr);
        fprintf(stdout,"File new_file.txt was succesful read and there were found %d symbols\n",num);
        fprintf(stdout,"File copy_ptr.txt was succesful created and there were written %d symbols\n",num);
    }
    else 
    {
        if (new_ptr = NULL)
        {
            printf("File new_file.txt wasn`t read!");
    
        }
        if (copy_ptr =NULL)
        {
            printf("File copy_ptr.txt wasn`t created and written!");
        }
    }
}