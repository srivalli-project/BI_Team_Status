/*Write a C program to count total zeros and ones in a binary number.*/
#include<stdio.h>
void func(int);

int num,zc=0,oc=0;

int main()
{
	printf("enter a number\n");
	scanf("%d",&num);
	void (*func_ptr)(int) = &func;
	func_ptr(num);
}

void func(int num)
{
	while(num>0)
	{
		if(num&1)
			oc++;
		else
			zc++;
		num = num>>1;
	}
	printf("zero count:%d one count:%d\n",zc,oc);
}
