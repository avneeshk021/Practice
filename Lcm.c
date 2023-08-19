/*logic
A simple soloution is to find all prime factors of both numbers then find union of all factors present in both numbers
a*b=LCM(a,b)*GCD(a,b)
LCM(a,b)=(a*b)/GCD(a,b)
*/
#include<stdio.h>
int gcd(int a, int b)

{
    if(a==0)
    return 0;
return gcd (b%a,a);
}
int lcm(int a, int b)
{
    return(a*b)/gcd(a,b);
    
}
int main()
{
    int a,b;
    printf("Enter two Number = ");
    scanf("%d %d", &a,&b );
    printf("LCM of %d and %d is %d", a,b,lcm(a,b));
    
    }

