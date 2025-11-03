#include<stdio.h>
int main()
{
    char st[20];
    printf("enter a string \n");
    scanf("%[^\n]",st);
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
        {
            st[i]=st[i]+32;
        }
        else if(st[i]>='a'&&st[i]<='z')
        {
            st[i]=st[i]-32;
        }
    }
    printf("the string is \n %s",st);
    return 0;

}