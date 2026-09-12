#include<stdio.h>
int main (){
    float f,c;
    printf("enter the temprature in celsius ");
    scanf("%f",&c);
    f = (c * 9) / 5 + 32;
    printf("the temprature in Fahrenheit is %f ",f);
    return 0;
}