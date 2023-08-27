#include<stdio.h>
#include<string.h>
int main()
{
    int hh,mm,ss;
    char a[3];
    printf("Enter hours hh");
    scanf("%d" ,&hh);
     printf("Enter min mm");
    scanf("%d" ,&mm);
     printf("Enter sec ss");
    scanf("%d" ,&ss);
     printf("Enter  string AM or PM ");
    scanf("%s",&a);
    if(hh>0 && hh<=12 && mm>0 &&mm<=59 && ss>0 && ss<=59 && (strcmp (a,"PM")==0 ||strcmp (a,"pm")==0|| strcmp(a,"AM")==0 ||strcmp (a,"am")==0))
    {
        if( (strcmp (a,"PM")==0 ||strcmp (a,"pm")==0) &&(hh!=12))
        {
            hh=hh+12;
        }
         if( (strcmp (a,"AM")==0 ||strcmp (a,"am")==0) &&(hh==12))
        {
            hh=0;
        }
    }
    return 0;
}