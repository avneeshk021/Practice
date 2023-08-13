#include <stdio.h>
#include <math.h>
int findprime(n)
{
    if (n == 1)
        return 0;
    // printf(" Neither a prime nor prime Number ");
    int flag = 1;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return 1;
    return 0;
}
int main()
{
    int n1, n2;
    int sum = 0;
    printf("Enter lower value ");
    scanf("%d", &n1);
    printf("Enter higer value ");
    scanf("%d", &n2);
    for (int i = n1; i <= n2; i++)
    {
        if (findprime(i))
        {
            sum = sum + i;
        }
    }
    printf(" %d ", sum);
    return 0;
}

// time complexity O(n)