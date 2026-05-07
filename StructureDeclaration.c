#include <stdio.h>
//Declaration of structure

struct Demo

{

    int i;    //4
    float f;  //4
             //total 8

    /* data */
};


int main ()
{


    struct Demo dobj;

    printf("%d\n",sizeof(dobj));
    return 0;
}