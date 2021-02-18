/*Write a C program to read file contents and display on console.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;
    fp=fopen("first","r");
    if(fp==NULL)
    {
        printf("cant not open file");
        exit(0);
    }
    printf("data store in file is\n");
    do{
        ch=fgetc(fp);
        if(ch!=EOF)
        putc(ch,stdout);
    }while(ch!=EOF);
    fclose(fp);
    return 0;
}
