//A perfect number is a positive integer that is equal to the sum of its proper positive 
//divisors—that is, the sum of its positive divisors excluding the number itself.
//Example: The number 6 is a perfect number because \(1+2+3=6).
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<n-1;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("it is a perfect number");
    }
    else
    {
        printf("it is not a perfect number");
    }
    return 0;
}