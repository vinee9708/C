#include<stdio.h>
#include<math.h>
int main(){
    char first , last[50];
    printf("Enter the name : ");
    scanf(" %c",&first);
    scanf("%s", last);

    printf("Abbrivation is : %c%c", first , last[0]);
    return 0;
}