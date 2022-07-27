//Write a program to find the Nth term of the Fibonnaci series.
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
    }
     printf("%dth term of fibonnaci series is : ",num );
     printf("%d ",t3);
    return 0;
}
