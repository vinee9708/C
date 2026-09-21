#include<stdio.h>
#include<math.h>
int main (){
    int x,y;
    printf("enter the 1st number ");
    scanf("%d",&x);
    printf("enter the 2nd number ");
    scanf("%d",&y);
    printf(" The smallest number is %d",  (x < y) ? x : y);
    return 0;
}