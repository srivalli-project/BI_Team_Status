/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main() 
{
    unsigned int num; 
    int i;
    scanf("%u",&num);
    for(i=0;i<16;i++)
        printf("%d",(num<<i&1<<15)?1:0);
}

//Output
4                                                                                                                             
0000000000000100
