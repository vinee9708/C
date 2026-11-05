#include<stdio.h>
int main(){
    int n,factorial = 1;
    printf("enter the number : ");
    scanf("%d",&n);
    for ( int i = n ; i>=1 ; i--){
        factorial = factorial*i;
    }
printf("%d",factorial);
return 0;
}