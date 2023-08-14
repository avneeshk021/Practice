#include <stdio.h>
#include <math.h>
int main()
{
    int n, intvar;
    printf("Enter a any number\n");

    scanf("%d", &n);

    double floatvar = sqrt((double)n);
    intvar = floatvar;
    if (intvar == floatvar)
    {
        printf("Perfect square ");
    }
    else
    {
        printf("Not a perfect sqaure");
    }
    return 0;
}