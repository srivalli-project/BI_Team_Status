//write a program for finding the size of structre and union  which has int*, int , char as members  (without using sizeof())

#include <stdio.h>
#define my_size(x,y)  (char*)&x-(char*)&y
typedef struct s
{
    int *p;
    int number;
    char c;
}sample_t;

typedef union u
{
    int *p;
    int number;
    char c;
}sample_union_t;

int main()
{
    sample_t arr[2];
    sample_union_t a[2];
    int i=my_size(arr[1],arr[0]);
    int j=my_size(a[1],a[0]);
    printf("without sizeof operator sizeof strcutre is %d\n",i);
    printf("without sizeof operator sizeof union is %d\n",j);
    printf("with sizeof operator sizeof strcutre %d\n",sizeof(sample_t));
    printf("with sizeof operator sizeof union is %d\n",sizeof(sample_union_t));
    return 0;
}
