/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main() 
{
    static int arr[]={0,1,2,3,4};
    int *p[] = {arr, arr+1, arr+2, arr+3, arr+4};
    int **ptr = p;
    printf("\n address of ptr before ptr incriment ptr=%p *ptr=%p **ptr=%p",ptr,*ptr,**ptr);
    ptr++;
    printf("\n after 1st incriment ptr++ address of ptr=%p p=%p arr=%p %ld %ld %d",ptr,p,arr, ptr-p, *ptr-arr, **ptr);
    *ptr++;
    printf("\n after 2nd incriment *ptr++ address of ptr=%p p=%p arr=%p *ptr=%d %ld %ld %d",ptr,p,arr,*ptr, ptr-p, *ptr-arr, **ptr);
    *++ptr;
    printf("\n after 3rd incriment *++ptr address of ptr=%p p=%p arr=%p *ptr=%d %ld %ld %d",ptr,p,arr,*ptr, ptr-p, *ptr-arr, **ptr);
    ++*ptr;
    printf("\n after 4th incriment ++*ptr address of ptr=%p p=%p arr=%p *ptr=%d %ld %ld %d",ptr,p,arr,*ptr, ptr-p, *ptr-arr, **ptr);
}

