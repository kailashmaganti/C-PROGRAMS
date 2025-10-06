//A palindrome number is a number that reads the same forwards and
// backwards, such as 121, 33, or 5, and can be tested by reversing its
// digits and comparing it to the original number
#include<stdio.h>
int main()
{
    int m,n ,r,rev=0;
    printf("enter a number");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(m==rev)
    {
        printf("it is a palindrome numeber");
    }
    else
    {
        printf("it is not a palindrome number");
    }
    return 0;


}