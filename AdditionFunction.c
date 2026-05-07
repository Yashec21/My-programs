#include <stdio.h>


int Addition(int NO1, int NO2)
{


    int Ans = 0;
    Ans = NO1+NO2;
    return Ans;
}
int main ()
{
    int Ret = 0;

    Ret = Addition(11,10);

    printf("Addition is :%d\n",Ret);
    
   
    return 0;
}