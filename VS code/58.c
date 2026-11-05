#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter side 1 : ");
    scanf("%d",&a);
    printf("enter side 2 : ");
    scanf("%d",&b);
    printf("enter side 3 : ");
    scanf("%d",&c);

    if(a == b && b == c ){
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