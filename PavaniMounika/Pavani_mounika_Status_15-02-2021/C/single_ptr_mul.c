#include <stdio.h>
power(int *);
void main()
{
	int a =5, *aa;
	aa = &a;
	a = power(aa);
	printf("%d",a);
}

power(int *ptr)
{
	int b;
	b = *ptr * *ptr;
	return(b);
}
