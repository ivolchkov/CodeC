// creating programm qgcc to making easier our life :)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main ( int argc , char *argv[])
{
    //qgcc.c name.c name.exe
    if (argc < 3)
    {
        fprintf(stderr,"Not specified code listing extension for .c and .exe\n");
        return 1;
    }
    if (argc > 3)
    {
        fprintf(stderr,"There must be one file with extension .c and one file with .exe\n");
        return 1;
    }
    char gcc_O[100]={"gcc -g -o "}; //gcc -g -o
    char *file_exe = argv[2]; // name.exe
    char *file_name = argv[1]; //name.c
    strcat(gcc_O,file_exe); //gcc -g -o name.exe
    strcat(gcc_O," ");
    strcat(gcc_O,file_name); //gcc -g -o name.exe name.c
    system(gcc_O); //gcc -g -o name.exe name.c
    fprintf(stdout,"Press Enter to continue the programm..");
    getchar();
    char qstart[50]={"./"};
    char *start = file_exe ;//name.exe
    strcat(qstart,start); //./name.exe
    system(qstart);


}