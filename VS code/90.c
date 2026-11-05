#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,min;
    printf("enter number 1 : ");
    scanf("%d",&n1);
    printf("enter number 2 : ");
    scanf("%d",&n2);
    min=(n1<n2)?n1:n2;
    for(int i=min ;i>=1; i--){
        if(n1%i==0 && n2%i==0){
            printf("HCF is %d ",i);
            break;
        }
    }
return 0;
}