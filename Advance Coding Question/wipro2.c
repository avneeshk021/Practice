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
 

int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
    else
        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
 

int main()
{
    int n = 9;
    // function calling
    printf("%d", countSetBits(n));
    return 0;
}
