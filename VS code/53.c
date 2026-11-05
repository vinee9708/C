#include<stdio.h>
#include<math.h>
int main(){
    int month;
    printf("enter the month (1-12)");
    scanf("%d",&month);

    if(month == 2){
        printf("Number of days : 28 / 29");
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11 ){
        printf("Number of days : 31 ");
    }
    else {
       printf("Number of days : 30");
    }
return 0;
}