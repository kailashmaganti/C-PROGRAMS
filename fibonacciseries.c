#include <stdio.h>
int main()
{
    int f,n,t,s;
    printf("enter a number ");
    scanf("%d",&n);
    f=0;
    s=1;
    printf("%d %d",f,s);
    for(int i=1;i<n-2;i++)
    {
        t=f+s;
        printf("%d",t);
        f=s;
        s=t;
    }
    return 0;
}