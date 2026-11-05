#include<stdio.h>
#include<math.h>
int main (){
    int x;
    printf("enter number");
    scanf("%d",&x);
    if( x % 5 == 0 && x % 11 == 0){
        printf(" Number is divisible by 5 and 11 ");
    }
    else{
        printf(" Number is not divisible by 5 and 11 ");
    }
    return 0;
}