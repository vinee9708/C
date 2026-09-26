#include<stdio.h>
#include<math.h>
int main(){
    int i , n  , sum =0;
    printf("enter n : ");
    scanf("%d",&n);
    
    for( i=1 ; i<=n ; i++){
        sum = sum + i;
    }
printf("Sum is %d \n", sum);

    for(i=n ; i>=1 ; i--){
        printf("%d \n",i);
    }
return 0;
}