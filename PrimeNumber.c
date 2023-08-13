/*Time Complexity is O(sqrt(n))


sqrt(n) means for ex- 13=1*13 are two multiple the 
we can calculate factor of any number like this.... 
n=a*b
suppose a<=b
        a*a=b*a   multiply by a both side
        a=sqrt(n) (a*b)=n
 
 */
#include<stdio.h>
#include<math.h>
int main()
{
    int n,flag=1;
    printf("Enter any number ");
    scanf("%d", &n);
    if(n==1)
    {
        printf("1 is not a prime number");
    }
    else
    {
for( int i=2; i<=sqrt(n); i++)
{
    if(n%i==0)
    {
        flag=0;
        break;
    }
}
if (flag==1)
{
    printf("%d is a Prime Number\n",n);
    printf("Square Root of %d is %.2f ",n,sqrt(n));

}
else
{
    printf("%d is not a prime number",n);
}
    }
    return 0;
}

