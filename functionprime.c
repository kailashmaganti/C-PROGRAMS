#include<stdio.h>
void prime(int x)
{
    int count=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("it is prime number");
    }
    else
    {
        printf("it is not a prime number");
    }    
}
int main()
{
    int x ;
    printf("enter a number");
    scanf("%d",&x);
    prime(x);
    return 0;
}
