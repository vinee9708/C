#include<stdio.h>
int main(){
    int n;
    for (int i=1;;){
        printf("enter the number : ");
        scanf("%d",&n);
            if(n%3==0){
                break;
            }
    }
printf("Program stopped");
return 0;
}