#include<stdio.h>
int main (){
    int P, R, T;
    printf ("enter the principle amount");
    scanf("%d",&P);
    printf("enter the rate of interest");
    scanf("%d",&R);
    printf("enter the time period");
    scanf("%d",&T);
    printf("the simple interest is %d", (P*R*T)/100);
    return 0;
}