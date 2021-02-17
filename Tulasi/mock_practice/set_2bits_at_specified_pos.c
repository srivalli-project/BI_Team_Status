//1. set 2 bits of number given pos1, pos2 --> use fn pointers 
#include<stdio.h>
int main()
{
    int num;
    int pos1,pos2;
    printf("enter number\n");
    scanf("%d",&num);
    printf("enter number pos1,pos2\n");
    scanf("%d,%d",&pos1,&pos2);
    printf("\nnumber before setting bits 0x%x",num);
    num|=(1<<pos1|1<<pos2);
    printf("\nnumber after setting bits 0x%x",num);
    num&=~(1<<pos1|1<<pos2);
    printf("\nnumber after resetting bits 0x%x",num);
}