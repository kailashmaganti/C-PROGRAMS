#include<stdio.h>
int main()
{
    int n,m,rev,r;
    rev=0;
    printf("enter the value of n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
        
    }
    if(rev==m)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}   