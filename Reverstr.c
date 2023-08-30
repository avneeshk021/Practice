#include <stdio.h>
#include<string.h>
int main()
{
    char s[]="ABCD" ,t;
    int l;
    l=strlen(s);
    for(int i=0; i<l/2; i++)
    {
        t=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=t;
    }
    printf("\n%s",s);
    return 0;
}