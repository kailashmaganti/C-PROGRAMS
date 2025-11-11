#include<stdio.h>
int reverse(int x)
{
    int r,sum=0;
    int i;
    while(x!=0)
    {
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    return sum;
}
int main()
{
    int x ;
    printf("enter a number");
    scanf("%d",&x);
    printf("the reverse is %d",reverse(x));
    return 0;
}