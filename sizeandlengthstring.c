#include <stdio.h>
int main()
{
    char st[100];
    int count=0;
    int i;
    printf("enter a string:");
    scanf("%[^\n]", st);
    printf("string is:%s\n",st);
    for(i=0;st[i]!='\0';i++)
    {
        count++;
    }
    printf("the size is %d \n",count);
    printf("the reverse of the string is \n" );
    for(i=count-1;i>=0;i--)
    {
        printf("%c",st[i]);
    }
    return 0;
    
}