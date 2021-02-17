/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int value;
    printf("enter number\n");
    scanf("%d",&value);
    char buffer[4];
    int *p=NULL;
    p=&value;

buffer[3] = (*p >> 24) & 0xFF;
buffer[2] = (*p >> 16) & 0xFF;
buffer[1] = (*p >> 8) & 0xFF;
buffer[0] = *p & 0xFF;

printf("1st byte=%d\n",buffer[0]);
printf("2nd byte=%d\n",buffer[1]);
printf("3rd byte=%d\n",buffer[2]);
printf("4th byte=%d\n",buffer[3]);
    return 0;
}
//Output

enter number
256
1st byte=0
2nd byte=1
3rd byte=0
4th byte=0


