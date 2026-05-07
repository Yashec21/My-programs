#include <stdio.h>


int Addition(int NO1, int NO2)
{


    int Ans = 0;
    Ans = NO1+NO2;
    return Ans;

}


int main ()
{
    int Ret = 0,A=0,B=0;

    printf("Enter first number\n");
    scanf("%d",&A);


    printf("Enter second number\n");
    scanf("%d",&B);

    Ret = Addition(A,B);

    printf("Addition is :%d\n",Ret);
    
   
    return 0;
}