#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
char s[12]="help";

s[1] = 'c';

printf("%s",s);
*/
char *ptr=NULL;
char i=9;
char *t=NULL;
ptr = malloc(sizeof(char)*4);
t= malloc(sizeof(char)*4);
 ptr = &i;

 //t = ptr;

 free(ptr);
 *ptr=90;
 printf("%c",*ptr);

}
