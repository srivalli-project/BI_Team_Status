#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp1,*fp2;
char s[30];

printf("enter 1st filename\n");
scanf("%s",s);

fp1 = fopen(s,"r");

if(fp1 == NULL)
{
	printf("Cannot open file1 for reading\n");
	exit(0);
}

char c,d;
int chars=0,words=0,lines=0;

printf("enter 2nd filename\n");
scanf("%s",s);


fp2 = fopen(s,"r");

if(fp2 == NULL)
{
        printf("Cannot open file2 for reading\n");
        exit(0);
}


c=fgetc(fp1);
d=fgetc(fp2);
while(c != EOF && d != EOF)
{
  
  if((c==EOF && d != EOF)||(c!=EOF && d==EOF))
  {printf("file sizes are different cannot compare\n"); exit(0);}

  if(c!=d)
  {chars=1;}
  
  c=fgetc(fp1);
  d=fgetc(fp2);
}

if(chars ==0 )
printf("Both files are same\n");
else if(chars ==1)
printf("Files dont match\n");
}

