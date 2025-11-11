#include<stdio.h>
int fact(int);
int fact(int x)
{
    int i;
    int fact=1;
    while(i<=x)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
int main()
{
    int x,a;
    printf("enter a number");
    scanf("%d",&a);
    a=fact(x);
    printf("the factorial is:%d",a);
    return 0;

}