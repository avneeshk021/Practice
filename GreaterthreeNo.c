#include <stdio.h>
int main()
{
    double a, b, c;
    printf("Enter three number");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a >= b && a >= c)
        printf("A is greater number ", a);
    if (b > a && b > c)
    {
        printf("B is greater number ", b);
    }
    if (c >= a && c >= b)

    {
        printf("c is Gratest number", c);
    }
    return 0;
}
