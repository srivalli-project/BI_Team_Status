/*Write a C program to clear nth bit of a number.*/
#include<stdio.h>
int func(int,int);

int main()
{
	int num,pos,res;
	printf("enter number and nth bit(0-31) to clear:");
	scanf("%d %d",&num,&pos);
	int (*func_ptr)(int,int) = &func;
	res = func_ptr(num,pos);
	printf("after clear %d bit of number %d the result: %d\n",pos,num,res);
}
int func(int num,int pos)
{
	return num & (~(1 << pos));
}
