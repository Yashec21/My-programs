#include <stdio.h>
//Declaration of structure
struct Demo{

    int i;    //4
    char ch;  //1 genarate padding
    float f;  //4
              //12
    
};


int main ()
{


    struct Demo dobj;

    printf("%d\n",sizeof(dobj)); // 12 ans with padding 
    return 0;
}