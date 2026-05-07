#include <stdio.h>


int no = 11; //global variable (data section)

void fun()
{
    int i = 51;  //local variable (stack)
    printf("Inside fun :%d\n",i);
    printf("Inside fun:%d\n",no);
}

int main ()
{

    int i =21;

    printf("Inside fun :%d\n",i);
    printf("Inside fun:%d\n",no);

    fun();


    return 0;
}