//Armstrong Numbers:..An Armstrong number, also known as a narcissistic number, 
//is a number that equals the sum of its own digits, each raised to the power of the total number of digits in the number. For instance, 153 is an Armstrong number because 
//it has three digits, and 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
#include<stdio.h>
int main()
{
    int rem , n , m , sum;
    sum=0;
    printf("enter a number");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(m==sum)
    {
        printf("it is an armstrong number");
    }
    else{
        printf("it is not a armstrong number");
    }
    return 0;

}