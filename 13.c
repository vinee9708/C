#include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("enter marks of 1st subject ");
    scanf("%f",&a);
    printf("enter marks of 2nd subject ");
    scanf("%f",&b);
    printf("enter marks of 3rd subject ");
    scanf("%f",&c);
    printf("enter marks of 4th subject ");
    scanf("%f",&d);
    printf("enter marks of 5th subject ");
    scanf("%f",&e);
    printf("the percentage of above subjects %f",((a+b+c+d+e)*100)/500);
}