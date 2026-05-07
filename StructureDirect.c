#include <stdio.h>

//Declaration of structure

#pragma pack(1)
struct Demo{

    int i;    //4
    char ch;  //1 genarate padding
    float f;  //4
              //9
    
};


int main ()
{


    struct Demo dobj;

    dobj.i=11;
    dobj.f=10.0f;
    dobj.ch='A';

    printf("%d\n",dobj.i); //11
    printf("%c\n",dobj.ch); //A
    printf("%f\n",dobj.f); //10.000000
    return 0;
}