//A strong number (also known as  or Factorion) is a positive integer that is equal to the sum of the factorials of its digits. For example, 145 is a
// strong number because 1! + 4! + 5! = 1 + 24 + 120 = 145
#include<stdio.h>
int main()
{
    int n ,m ,sum,rem;
    sum=0;
    printf("enter a number");
    scanf("%d",&n);
    m=n;
    
    while(n!=0)
    {
        rem=n%10; 
        int fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        
        sum=sum+fact;
        n=n/10;
    }
    if(sum==m)
    {
        printf("it is a strong number");
    
    }
    else
    {
        printf("it is not a strong number");
    }
    return 0;

}