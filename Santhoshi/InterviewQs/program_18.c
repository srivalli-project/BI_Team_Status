/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main()
{
    void fun();
    int i=1;
    while(i<=5)
    {
        printf("%d",i);
        if(i>2)
          goto here;
    }
}
void fun()
{
    here:
          printf("\n If it works, don't fix it");
}


//output:
Compilation error is seen as in main goto here is declared but here is not defined in main stack.

main.c: In function ‘main’:
main.c:17:11: error: label ‘here’ used but not defined
           goto here;