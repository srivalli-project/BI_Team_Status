#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp1;

fp1 = fopen("sample1.txt","r");

if(fp1 == NULL)
{
	printf("Cannot open file for reading\n");
	exit(0);
}

char c;
int chars=0,words=0,lines=0;

c=fgetc(fp1);

while(c != EOF)
{
  
  if(c=='\n')
  lines++;
  else if(c==' ')
  words++;
  else
  chars++;

  c=fgetc(fp1);
}

words = words+lines;

printf("The number of characters=%d words=%d lines=%d\n",chars,words,lines);
}

