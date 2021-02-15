#include <stdio.h>
void main() 
{
    static int arr[]={0,1,2,3,4};
    int *p[] = {arr, arr+1, arr+2, arr+3, arr+4};
    int **ptr = p;
    printf("\nptr[0][2]=%d,ptr=%p,*ptr=%p,**ptr=%d", ptr[0][2],ptr, *ptr, **ptr);
    ptr++;
    printf("\nptr=%p,*ptr=%p,**ptr=%d", ptr, *ptr, **ptr);
    printf("\n %ld %ld %d", ptr-p, *ptr-arr, **ptr);
    *ptr++;
    printf("\nptr[0][2]=%d,ptr=%p,*ptr=%p,**ptr=%d", ptr[0][2],ptr, *ptr, **ptr);
    printf("\n %ld %ld %d", ptr-p, *ptr-arr, **ptr);
    *++ptr;
    printf("\nptr=%p,*ptr=%p,**ptr=%d", ptr, *ptr, **ptr);
    printf("\n %ld %ld %d", ptr-p, *ptr-arr, **ptr);
    ++*ptr;
    printf("\nptr=%p,*ptr=%p,**ptr=%d", ptr, *ptr, **ptr);
    printf("\n %ld %ld %d", ptr-p, *ptr-arr, **ptr);
}
/*
ptr[0][2]=2,ptr=0x7ffd0e24aef0,*ptr=0x601040,**ptr=0                                                                          
ptr=0x7ffd0e24aef8,*ptr=0x601044,**ptr=1                                                                                      
 1 1 1                                                                                                                        
ptr[0][2]=4,ptr=0x7ffd0e24af00,*ptr=0x601048,**ptr=2                                                                          
 2 2 2                                                                                                                        
ptr=0x7ffd0e24af08,*ptr=0x60104c,**ptr=3                                                                                      
 3 3 3                                                                                                                        
ptr=0x7ffd0e24af08,*ptr=0x601050,**ptr=4                                                                                      
 3 4 4 
 */