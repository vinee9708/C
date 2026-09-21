#include<stdio.h>
#include<math.h>
int main (){
    //1 -> Is a character
    //0 -> Is not a character
    char ch;
    printf("enter the character ");
    scanf("%c",&ch);
    printf("%d", ch>='0' && ch<='9');
    return 0;
}