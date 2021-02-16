#include <stdio.h>
void main() 
{
   enum days {MON=-1, TUE, WED=6, THU, FRI, SAT};
   int i;
   i=MON;
   printf("%d %d %d %d %d %d", ++i, TUE, WED, THU, FRI, SAT);
}