#include <stdio.h>

struct node{
	int *iptr;
	int i;
	char c;
};

int main()
{
	struct node *ptr = NULL;
	ptr++;
	printf("size of structure:%d\n",ptr); 

	return 0;
}

