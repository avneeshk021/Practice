/*etha like chocolates an he loves to try different onces there are N shops in a  market lablled from 1 t N and each shops offers a different variety of chocolate jetha start from ith shop  Jetha would like to know how many more shops he has to visit you have been give L dentnoting number of bits required to represent N you need to return the maximum number of shops he can visit
Example
Input i=2 L=3
output 6
 Example 2
Input i=1 L=2
output 3

*/
# include<stdio.h>
#include<math.h>
int main()
{
    int i , l , j;
    scanf("%d %d ",&i,&l);
    j=pow(2,l)-i;
    printf("%d\n",j);
    return 0;
}