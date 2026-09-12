#include<stdio.h>
int main (){
    float f,c;
    printf("enter the temprature in Fahrenheit ");
    scanf("%f",&f);
    c= ((f-32)*5)/9;
    printf("the temprature in Celsius %f",c);
    return 0;
}