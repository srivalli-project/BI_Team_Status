#include<stdio.h>

void func(char *);

int main()
{
	char s[100];  
	int i,n,c=0;

	printf("Enter  the string : ");
	scanf("%s",s);
	void (*func_ptr)(char *) = &func;
	func_ptr(s);

}

void func(char *str)
{
	char *ptr,*rev;
	ptr = str;
	while(*ptr!='\0')
		++ptr;
	--ptr;

	for(rev = str;ptr >= rev;)
	{
		if(*ptr != *rev)
		{
			printf("entered string is not palindrome\n");
			return ;
		}
		--ptr;
		rev++;
	}
	printf("entered string is palindrome\n");
}
