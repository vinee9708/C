#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,i;
    printf("Enter the Number : ");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;
    }
printf("Number of digit in the number is %d",count);
return 0;
}