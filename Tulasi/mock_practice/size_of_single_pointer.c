//sizeof pointer to a structure/char/int/float
#include <stdio.h>
#define MY_SIZEOF_POINTER(x) (((char*)(x+1))-(char*)x)
typedef struct s
{
    int *p;
    int number;
    char c;
}sample_t;

int main()
{  sample_t *s=NULL;
   sample_t **ss=&s;
   char *c = NULL;
   char **cc = &c;
   int *i = NULL;
   int **ii = &i;
   float *f=NULL;
   float *ff=&f;
   double *d=NULL;
   double *dd=&d;
   printf("\nSizeof a structure pointer without sizeof %d",MY_SIZEOF_POINTER(ss));
   printf("\nSizeof a char pointer without sizeof %d",MY_SIZEOF_POINTER(cc));
     printf("\nSizeof a int pointer without sizeof %d",MY_SIZEOF_POINTER(ii));
   printf("\nSizeof a float pointer without sizeof %d",MY_SIZEOF_POINTER(ff));
   printf("\nSizeof a double pointer without sizeof %d",MY_SIZEOF_POINTER(dd));
}
