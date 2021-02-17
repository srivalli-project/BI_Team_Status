#include<stdio.h>
#include<stdlib.h>

FILE *fptr1, *fptr2; 
char filename1[100],filename2[100], c;

void func(char *,char *);

int main()
{
	printf("enter filenames\n");
	scanf("%s %s",filename1,filename2);
	void (*func_ptr)(char *,char *) = &func;
	func_ptr(filename1,filename2);
}

void func(char *f1,char* f2)
{
	fptr1 = fopen(f1, "r");
	if (fptr1 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename1); 
		exit(0); 
	}
	fptr2 = fopen(f2, "w"); 
	if (fptr2 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename2); 
		exit(0); 
	} 	
	c = fgetc(fptr1); 
	while (c != EOF) 
	{ 
		fputc(c, fptr2); 
		c = fgetc(fptr1);
	}
	fclose(fptr1); 
	fclose(fptr2); 
}	
