#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    //
    // base case
    if (a == b)
        return a;
    // any one number is greater
    if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}
int main()
{
    int a = 18, b = 12;
    printf("HCF or GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
/*
int gcd(int a,int b){
    if(a==0)
    return b;
return gcd(b%a,a);
}
*/