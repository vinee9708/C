#include<stdio.h>
#include<math.h>
int main(){
    int n,r,sum=0,sign=1,org;
    printf("enter the number : ");
    scanf("%d",&n);
    org=n;
    while(n>0){
        r=n%10;
        sum=sum+ (sign*r);
        sign = -sign;
        n=n/10;
    }
if(sum%11==0){
    printf("Divisible by 11");
}
else{
    printf("Not divisible by 11 ");
}
return 0;
}