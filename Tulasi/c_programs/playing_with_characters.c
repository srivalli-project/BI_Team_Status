#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   char ch;
    char a[30];
    char b[30];

    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",a);
    printf("%s\n",a);
    scanf("\n");
    fgets(b,30,stdin);
    printf("%s\n",b);  
    return 0;
}