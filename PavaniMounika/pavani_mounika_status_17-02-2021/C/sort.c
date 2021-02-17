#include<stdio.h>

void func(int *,int);

int main()
{
	int i,size;
	printf("enter size of array:");
	scanf("%d",&size);
	printf("enter array values\n");
	int arr[size];
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	void (*func_ptr)(int *,int) = &func;
	func_ptr(arr,size);
}

void func(int *ptr,int n)
{
	int i,j,t;
	for (i = 0; i < n; i++) { 

		for (j = i + 1; j < n; j++) { 

			if (*(ptr + j) < *(ptr + i)) { 

				t = *(ptr + i); 
				*(ptr + i) = *(ptr + j); 
				*(ptr + j) = t; 
			} 
		} 
	} 
	for (i = 0; i < n; i++) 
		printf("%d ", *(ptr + i));
	printf("\n");
}
