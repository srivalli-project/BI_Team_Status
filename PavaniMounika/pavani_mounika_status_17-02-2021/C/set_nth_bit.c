#include<stdio.h>
void func(int,int,int);

int main()
{
	int num,pos1,pos2,res;
	printf("enter number and two positions nth bit(0-31) to set:");
	scanf("%d %d %d",&num,&pos1,&pos2);
	void (*func_ptr)(int,int,int) = &func;
	func_ptr(num,pos1,pos2);
}

void func(int num,int pos1,int pos2)
{
	int res = num;
	res = res | (1<<pos1);
	res = res | (1<<pos2);
	printf("after setting %d bit and %d bit of number %d the result: %d\n",pos1,pos2,num,res);
}
