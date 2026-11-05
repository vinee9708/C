#include<stdio.h>
#include<math.h>
int main (){
    int age;
    printf("enter the age ");
    scanf("%d",&age);

    age>=18 ? printf("Eligible to vote "):printf("Not eligible to vote ");
    return 0;
}