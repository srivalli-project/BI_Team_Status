#include <stdio.h>
void main() 
{
	unsigned int num; 
	int i;
	printf("Enter a number:");
	scanf("%u",&num);
	for(i=0;i<16;i++)
		printf("%d",(num<<i&1<<15)?1:0);
}

