//1. set 2 bits of number given pos1, pos2 --> use fn pointers 

#include <stdio.h>
#include <stdlib.h>


void (*funptr)(int ,int ,int*);
void set(int ,int ,int*);
int main()
{
  int i,j,n;

  printf("enter the no. and positions\n");
  printf(3);
  scanf("%d%d%d",&n,&i,&j);
  funptr=&set;

  (*funptr)(i,j,&n);
}

void set(int p1,int p2,int *p)
{
  int k=0,a,b,c;

	a=1<<(p1-1);
	b=1<<(p2-1);
        c=a|b;
	*p=*p|c;

  printf("after setting number is %x\n",*p);
}
