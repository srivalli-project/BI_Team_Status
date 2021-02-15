#include <stdio.h>
#define MIN(x,y) printf("%d %d\n",x,y); (x<y)?x:y;\
	printf("%d %d\n",x,y);
void main() 
{
	int x=3, y=4, z;
	z = MIN(x+y/2,y-1);
	if(z>0)
		printf("%d",z);
}

