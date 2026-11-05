#include<stdio.h>
int main(){
    int n;
    for(int i=0;;){
        printf("enter the number : ");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }
    }
printf("Program stopped");
return 0;
    
}