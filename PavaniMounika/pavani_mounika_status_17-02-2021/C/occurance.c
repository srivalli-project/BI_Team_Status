#include<stdio.h>

void func(char *,char);

int main()
{
	char str[100],ch;
	printf("enter a string and a character\n");
	scanf("%s %s",str,&ch);
	void (*func_ptr)(char *,char) = &func;
	func_ptr(str,ch);
}

void func(char *str, char ch)
{
	for(int i=0;*str!='\0';i++)
	{
		if(*str == ch)
			printf("%c is found at position %d\n", ch, i + 1);
	str++;
	}
}
