#include<stdio.h>
#include<string.h>
int main()
{
    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the date \n");
    char date[11];
    char * token;
    scanf("%s", date); // here we are not use address sing because date is already a address
    token =strtok(date,"-");
    // strtok is use  for break a string...... strtok string ko break krta hai
    token=strtok(NULL,"-");
    int i= atoi(token);// atoi means ascii to integer
    printf("Month has %d days",arr[i-1]);
    return 0;
}