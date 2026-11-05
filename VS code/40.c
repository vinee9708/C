#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("enter the marks ");
    scanf("%d",&x);

    if(x>=90 && x<=100){
        printf("A+");
    }
    else if(x>=70 && x<90 ){
        printf("A");
    }
    else if(x>=30 && x<70){
        printf("B");
    }
    else{
        printf("C");
    }
    return 0;
}