#include<stdio.h>

int main()
{
	int num;
	int *ptr;
	ptr = &num;
	printf("Enter a number in hexa format\n");
	scanf("%x",&num);
	for (int i = 0;i< sizeof(num); ++i) {
		char byte = *((char *)ptr + i);
		printf("%x\n", byte);
	}
}	
