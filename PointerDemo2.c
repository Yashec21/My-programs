#include <stdio.h>

int main()
{
    char ch ='A';
    char *cptr = &ch;


    int i = 11;
    int *iptr=&i;


    float f=99.99f;
    float *fptr=&f;

    double d=78.67345;
    double *dptr=&d;

     printf("%c\n",*cptr);
     printf("%d\n",*iptr);
     printf("%f\n",*fptr);
     printf("%lf\n",*dptr);



    return 0;
}