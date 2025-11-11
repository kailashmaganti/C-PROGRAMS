#include<stdio.h>
void reverse(int x)
{
    int r,sum=0;
    int i;
    int m;
    m=x;
    while(x!=0)
    {
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
    }
    if(sum==m)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
}
int main()
{
    int x ;
    printf("enter a number");
    scanf("%d",&x);
    reverse(x);
    return 0;
}