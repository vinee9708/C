#include<stdio.h>
#include<math.h>
int main(){
    int day , month , year;
    printf("Enter the date in DD MM YY format : ");
    scanf("%d %d %d", &day , &month , &year);

    if(month<1 || month>12){
        printf(" Invaild date ");
    }
    else if(month == 2){
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
            if(day>=1 && day<=29){
                printf("Valid date ");
            }
            else{
                printf("Invalid date ");
            }
        }
        else if(day>=1 && day<=28){
            printf("Valid date");
        }
        else{
            printf("Invalid date ");
        }
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11 ){
        if (day>=1 && day<=30){
            printf("Valid date ");
        }
        else{
            printf("Invalid date");    
        }
    }
    else {
        if(day>=1 && day<=31){
            printf("Valid date ");
        }
        else{
            printf("Invalid date");
        }
    }
return 0;
}