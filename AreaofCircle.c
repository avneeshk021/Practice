#include <stdio.h>
#define PI 3.14
int main()
{
    float radius, area , diameter;
    scanf("%f" ,& diameter);
    radius=(float)diameter/2; //it means  explicit type cast
     area = PI*radius*radius;
    printf("\n Area of circle = %.2f\n", area);
    // %2F menas two decimal value k liye
    return 0;
}