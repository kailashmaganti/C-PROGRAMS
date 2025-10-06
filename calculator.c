#include <stdio.h>
int main()
{
    char x;
    int a,b,c;
    printf(" enter + or - or * or / or %%");
    scanf("%c",&x);
    printf(" enter a and b");
    scanf("%d%d",&a,&b);
    switch(x)
    {
        case '+': 
        c=a+b; 
        printf(" the sum is %d",c);
        break;
        case '-': 
        c=a-b; 
        printf(" the difference is %d",c);
        break;
        case '*': 
        c=a*b; 
        printf(" the product is %d",c);
        break;
        case '/': 
        c=a/b; 
        printf(" the division is %d",c);
        break;
        case '%': 
        c=a%b; 
        printf(" the remainder is %d",c);
        break;
        default : printf("enter proper operator ");

    }
    return 0;
}