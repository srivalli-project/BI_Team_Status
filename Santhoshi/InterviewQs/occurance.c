//Write a C program to search all occurrences of a character in given string. 
#include <stdio.h>
#include <stdlib.h>

void (*funptr)(char ,char*);
void search(char ,char*);
int main()
{
  char i,j,n;
  char *str =NULL;
   str=(char*)malloc(sizeof(char)*20);
  printf("enter the character to search and string\n");
//  printf(3);
  //str=gets();
  scanf("%c %s",&i,str);
  funptr=&search;

  (*funptr)(i,str);
}

void search(char p1,char *p)
{
  int k=0,a=0,b,c;
  int arr[20];
	while(*p != NULL)
	{
		if(*p == p1){
		arr[a] = k;a++;}
		k++;
		p++;
		
 	}	

  printf("after searching number occured %d times \n",a);
}
