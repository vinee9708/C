#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    printf("enter the character");
    scanf(" %c",&ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        switch(ch){
            case 'a' :  printf("character is vowel ");
                break;
            case 'e' :  printf("character is vowel ");
                break;
            case 'i' : printf("character is vowel ");
                break;
            case 'o' : printf("character is vowel ");
                break;
            case 'u' : printf("character is vowel ");
                break;
            case 'A' : printf("character is vowel ");
                break;
            case 'E' : printf("character is vowel ");
                break;
            case 'I' : printf("character is vowel ");
                break;
            case 'O' : printf("character is vowel ");
                break;
            case 'U' : printf("character is vowel ");
                break;

            default:
                printf("character is consonent");
        }
    }
    else{
        printf("Not a valid alphabet");
    }
    return 0;
}