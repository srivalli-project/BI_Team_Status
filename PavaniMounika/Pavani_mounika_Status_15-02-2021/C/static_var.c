#include <stdio.h>
void main() 
{
	static int i = 1;
	if (!i)
		printf("Recursive calls are painful\n");
	else
	{
		i = 0;
		printf("Recursive calls are challenging\n");
		main();
	}
}

