#include<stdio.h>

union node{
	int *iptr;
	int i;
	char c;
};

int main(){

	union node *ptr = NULL;
	ptr++;
	printf("Size of the union:%d",ptr);

	return 0;
}
