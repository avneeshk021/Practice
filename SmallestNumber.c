#include <stdio.h>
int main()
{
    double a, b, c, d;
    printf("Enter three number");
    scanf("%lf %lf %lf %lf", &a, &b, &c ,&d);
    if (a < b && a < c && a<d)
        printf("A is Smallest number ", a);
    if (b < a && b < c && b<d)
    {
        printf("B is Smallest number ", b);
    }
    if (c < a && c < b && c<d)

    {
        printf("c is Gratest number", c);
    }
    if(d<a && d<b && d<c)
    {
        printf("D is smallest number " ,d);
    }
    return 0;
}
