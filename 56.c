#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter side 1");
    scanf("%d",&a);
    printf("enter side 2");
    scanf("%d",&b);
    printf("enter side 3");
    scanf("%d",&c);

    if((a>0 && b>0 && c>0 ) && (a+b>c && a+c>b && b+c>a )){
        printf(" Valid traingle ");
    }
    else{
        printf("Not a valid traingle ");
    }
    return 0;
}