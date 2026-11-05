#include<stdio.h>
#include<math.h>
int main (){
    int x,y,z;
    printf("enter marks of subject 1 ");
    scanf("%d",&x);
    printf("enter marks of subject 2 ");
    scanf("%d",&y);
    printf("enter marks of subject 3 ");
    scanf("%d",&z);
    printf("average of the above subjects %d",(x+y+z)/3);
    return 0;
}