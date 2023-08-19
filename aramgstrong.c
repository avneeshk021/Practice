#include<stdio.h>
#include<math.h>
int order(int x)
{
    int n=0;
    while(x)
    {
        n++;
        x=x/10;
    }
    return n;
}
int armstrong(int x)
{
    int n=order(x);
    int temp=x, sum=0;
    while (temp)
    {
        int result=temp%10;
        sum+=pow(result,n);
        temp=temp/10;
    }
    if(sum==x)
    return 1;
    else
    return 0;
}
int main()
{
    int x;
    printf("Enter any Number ");
    scanf("%d",&x);
    if(armstrong(x))
    printf("Armstorg number");
    else
    printf("Not a Armstrong Number");

    return 0;

}