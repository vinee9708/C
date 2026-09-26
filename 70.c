#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    printf("enter the number ");
    scanf("%d",&j);

    for(int i=j; j>=1;j=j-1){
        printf("%d \n",j);
    }
return 0;
}