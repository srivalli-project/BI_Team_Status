/*Write a C program to sort array using pointers.---> use fn pointers*/

#include <stdio.h>
#define MAX 20
void sort_array(int *a,int size)
{
    int i,j=0;
    int temp=0;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
          if(*(a+i)>*(a+j))
          {
              temp=*(a+i);
              *(a+i)=*(a+j);
              *(a+j)=temp;
          }
        }
    }
}
int main()
{   void (*fn_pointer_for_sort_array)(int *,int)=sort_array;
    int a[MAX];
    int size;
    int i;
    printf("enter size of array\n");
    scanf("%d",&size);
    printf("enter array\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("Before sorting array is\n");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    fn_pointer_for_sort_array(a,size);
    printf("\nAfter sorting array is\n");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
}
