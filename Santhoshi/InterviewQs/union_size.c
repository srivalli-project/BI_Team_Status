/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

union sample{
    int * p;
    int a;
    char x;
};
int main(){

  union sample *ptr = 0;
  printf("before incriment:  %d\n",ptr);
  ptr++;
  printf("after incriment:  %d",ptr);

  return 0;
}

//Output:
before incriment:  0                                                                                                          
after incriment:  8   