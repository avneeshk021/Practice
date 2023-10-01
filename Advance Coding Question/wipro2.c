/* Given a positive interger N point count of set bit in it 
Example 1
input N=6
output
2
Example 1
input N=8
output
1

*/
#include <stdio.h>
unsigned int SetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
 

int main()
{
    int i;
    scanf("%d",&i);
    printf("%d", SetBits(i));
    return 0;
}