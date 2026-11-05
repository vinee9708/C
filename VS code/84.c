#include<stdio.h>
#include<math.h>
int main(){
    int n,arm=0,r,original;
    printf("Enter a number : ");
    scanf("%d",&n);
    original=n;
    while(n>0){
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;                
    }
if(arm==original){
    printf("Armstrong number");
}
else{
    printf("Not an armstrong number");
}
return 0;
}