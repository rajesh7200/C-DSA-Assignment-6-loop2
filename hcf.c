//Write a program to calculate HCF of two numbers.

#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    for(i=(a<b?a:b);i>=1;i--)
    {
        if(a%i==0&&b%i==0)
        break;

}    printf("HCF is %d.",i);


}




/*
#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    for(i=2;i<=a*b;i++)
    {
        if((i%a==0) && (i%b==0))
        {
            printf("LCM is %d",i);
            j=(a*b)/i;
            printf("\nHCF is %d.",j);
            break;
        }
    }
    return 0;
}
*/

