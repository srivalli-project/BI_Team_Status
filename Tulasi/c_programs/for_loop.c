#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    char* ch[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++)
    if(i<=9)
    printf("%s\n",ch[i]);
    else if(i%2==0)
    printf("even\n");
    else {
    printf("odd\n");
    }
/*
Input (stdin)

8
11

Expected Output

eight
nine
even
odd

*/