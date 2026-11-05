#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z'){
        printf("Upper case letter");
    }
    else if(ch >='a' && ch <= 'z'){
        printf("Lower case letter");
    }
    else{
        printf("Not a letter!");
    }
    return 0;
}