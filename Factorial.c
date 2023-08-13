//factorial of any number
#include<stdio.h>

// unsigned int fact(unsigned int n)
// {
//     int res=1;
//     for(int i=2; i<=n; i++)
//     res=res*i;
//     return res;
// }
// int main()
// {
//     int num; 
//     scanf("%u", &num);
//     printf("Factorial of  %u is %u " ,num, fact(num));
//     return 0;
// }

//Factorial using Recurrsion
unsigned int fact(unsigned int n)
{
    if(n==0)
    return 1;
return n*fact(n-1);
}
int main(){
    int num; 
    scanf("%u", &num);
    printf("Factorial of  %u is %u " ,num, fact(num));
    return 0;
}

//Time Complexity O(n)