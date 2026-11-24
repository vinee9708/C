#include<stdio.h>

void greeting();

int main(){
    greeting();
    return 0;
}

void greeting(){
    printf("Indian(I) or french(F)");
    char ch;
    scanf("%c",&ch);
    if (ch=='I'){
        printf("Namaste");
    
    }
    else{
        printf("Bonjour");
    }
}