#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,max;
    printf("enter number 1 : ");
    scanf("%d",&n1);
    printf("enter number 2 : ");
    scanf("%d",&n2);
    max=(n1>n2)?n1:n2;

    while(1){
        if(max%n1==0 && max%n2==0){
            printf("Lcm of number 1 and number 2 is : %d",max);
            break;
        }
   
    ++max;
    }

return 0;
}