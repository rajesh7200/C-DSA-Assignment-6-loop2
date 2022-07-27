//Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int i,num,t1=0,t2=1,t3;

    printf("Enter a number :");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;

        if(t3==num)
            break;
    }

      if(t3==num)
        {
             printf("Given number %dth is fibonnaci series.",num );
        }
        else
        {
            printf("Given number %dth is not a fibonnaci series.",num );
        }

    return 0;
}
