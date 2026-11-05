#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("enter the character ");
    scanf(" %c",&ch);

    if(ch>='a' && ch<='z'){
        printf(" Lower case");
    }
    else if(ch>='A' && ch<='Z'){
        printf(" Upper case ");
    }
    else if(ch>='0' && ch <='9' ){
        printf (" Digit");
    }
    else{
        printf(" Special character");
    }
    return 0;
}