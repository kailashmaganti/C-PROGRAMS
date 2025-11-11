#include<stdio.h>
int sum(int x)
{
    int r,sum=0;
    int i;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r;
        x=x/10;
    }
    return sum;
}
int main()
{
    int x ;
    printf("enter a number");
    scanf("%d",&x);
    printf("the sum is %d",sum(x));
    return 0;
}