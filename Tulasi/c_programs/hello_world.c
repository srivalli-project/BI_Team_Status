#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", s);
    strcpy(s+14, s);
    strncpy(s,"Hello, World!\n",14);
    printf("%s",s);  
    return 0;
}