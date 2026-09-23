#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter the number ");
    scanf("%d",&x);
    if(x>0){
        printf("positive");
    
    }
    else if(x<0){
        printf("negitive");
    }
    else{
        printf("Zero");
    }
    return 0;
}