#include<stdio.h>
void fibonacci(int x)
{
    int f,s,t;
    f=0;
    s=1;
    printf("%d %d",f,s);
    for(int i=0;i<=x-1;i++)
    {
        t=f+s;
        printf("%d ",t);
        f=s;
        s=t;
    }
    
}
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}