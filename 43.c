#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z;
    printf("enter x ");
    scanf("%d",&x);
    printf("enter y ");
    scanf("%d",&y);
    printf("enter z ");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("x is greatest among three numbers ");
    }
    else if(y>x && y>z){
        printf("y is greatest among thee numbers ");
    }
    else{
        printf("z is greatest among thee numbers ");
    }
    return 0;
}