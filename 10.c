#include<stdio.h>
int main (){
    int b , h ,x;
    printf ("enter the base of triangle");
    scanf("%d",&b);
    
    printf ("enter the hieght of traingle");
    scanf("%d",&h);
    x = (b*h)/2 ;
    printf ("the area of trangle is :%d\n",x);
    return 0;
}