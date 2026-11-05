#include<stdio.h>
int main (){
    int a,b,c,d;
    printf("enter Basic salary ");
    scanf("%d",&a);
    printf("enter HRA");
    scanf("%d",&b);
    printf("enter DA");
    scanf("%d",&c);
    printf ("enter other allowance");
    scanf("%d",&d);
    printf ("the gross salary of employee is %d",a+b+c+d);
    return 0;
}