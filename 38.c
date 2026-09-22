#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter the number ");
    scanf("%d",&x);

    if(x>=0){
        printf("Positive number \n");
        if(x%2 ==0){
            printf("even number \n");
        }
        else{
            printf("odd number \n");
        }
    }
    else {
        printf("Negitive number \n");
    }
}