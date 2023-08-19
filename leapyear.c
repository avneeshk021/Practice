#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter any Year to check leap year is not");
    scanf("%d",n);
    if(n%400==0 && n%100==0 && n%4==0){
        printf("It is Leap Year");
    }
else{
printf("This not a Leap year");
}  
    return 0;
}