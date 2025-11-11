#include<stdio.h>
#include<math.h>
void armstrong( int n)
{
    int r, sum = 0, temp;
    temp = n;
    while (n != 0) {
        r = n % 10;
        sum = sum+ pow(r,3);
        n /= 10;
    }
    if (sum == temp)
        printf("It is an Armstrong number\n");
    else
      printf("It is not an Armstrong number\n");
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
