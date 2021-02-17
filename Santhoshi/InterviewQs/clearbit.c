// C program to clear nth bit of a number. --> use fn pointers 
#include <stdio.h>
#include <stdlib.h>

void (*funptr)(int ,int*);
void clear(int ,int*);
int main()
{
  int i,j,n;

  printf("enter the no. and positions\n");
//  printf(3);
  scanf("%d%d",&n,&i);
  funptr=&clear;

  (*funptr)(i,&n);
}

void clear(int p1,int *p)
{
  int k=0,a,b,c;

	a=1<<(p1-1);
	a=~a;
        
	*p=*p&a;

  printf("after setting number is %x\n",*p);
}
