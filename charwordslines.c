#include<stdio.h>
int main()
{
    int character,words,lines,vowels,consonants;
    char st[100];
    printf("enter a string ");
    gets(st);
    for(int i=0;st[i]!='0';i++)
    {
        if(st[i]=='\n')
        {
            lines++;
        }
        if(st[i]==' '||st[i]=='\n'||st[i]=='\t');
        {
            words++;
        }
        if(st[i]=='a' ||st[i]=='e' ||st[i]=='i'||st[i]=='o'||st[i]=='u' )
        {
            vowels++;
        }
        if(st[i]!='a'||st[i]!='e'||st[i]!='i'||st[i]!='o'||st[i]!='u')
        {
            consonants++;
        }
        else
        {
            character++;
        }


    
    }
    return 0;

}