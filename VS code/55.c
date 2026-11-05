#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter angle 1");
    scanf("%d",&a);
    printf("enter angle 2");
    scanf("%d",&b);
    printf("enter angle 3");
    scanf("%d",&c);

    if(a>0 && b>0 && c>0 && a+b+c == 180 ){
        printf(" Valid traingle ");
    }
    else{
        printf("Not a valid traingle ");
    }
    return 0;
}