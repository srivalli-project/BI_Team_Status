/*Write program showing segmentation fault , dangling / wild pointers, using switch case*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 20
void wild_pointer_ex()
{
    int *p;
    printf("here p is uninitilized pointer/wild pointer %p\n",p);
    return 0;
}
void dangling_pointer_ex_and_seg_fault()
{
    int *q=(int*)malloc(sizeof(int));
            int k=5;
            q=&k;
            printf("value stored in *q is %d\n",*q);
            free(q);
            printf("accessing freed memory location");
            *q=10;
}

int main()
{   
    int ch;
    
    while(1)
    {
        printf("enter choice\n");
        printf("1.wild pointer\n");
        printf("2.dangling pointer\n");
        printf("3.segmentation fault\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            wild_pointer_ex();
            break;
            case 2:
            case 3:
            dangling_pointer_ex_and_seg_fault();
            break;
        }
    }
    
}
