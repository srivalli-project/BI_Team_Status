#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n;
	int *p;
	printf("1:segmentation fault,2:wild pointer,3:dangling pointer\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:n = 2;
		       printf("enter a value\n");
		       scanf("%d",n);
		       break;
		case 2:*p=12;
		       printf("wild pointer\n");
		       break;
		case 3:p = &i;
		       free(p);
	}
}
