#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter angle 1 : ");
    scanf("%d",&a);
    printf("enter angle 2 : ");
    scanf("%d",&b);
    printf("enter angle 3 : ");
    scanf("%d",&c);

    if(a == 60 && b == 60 && c == 60 ){
        printf(" Equilateral triangle ");
    }
    else if(a == b || b == c || a == c){
        printf("Isoceles  triangle ");
    }
    else if(a != b && b != c && a != c){
        printf(" Scalene traingle ");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}