#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void int_sum_diff(int,int);
void float_sum_diff(float,float);
int main()
{
	int a,b;
    float fa,fb,fmax=0;
    scanf("%d %d",&a,&b);
    int_sum_diff(a,b);
    scanf("%f %f",&fa,&fb);
    float_sum_diff(fa,fb);
    return 0;
}
void int_sum_diff(a,b)
{   
    printf("%d %d\n",a+b,a-b);
}

void float_sum_diff(float a,float b)
{   
        printf("%.1f %.1f\n",a+b,a-b);

}
