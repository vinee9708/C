#include<stdio.h>
#include<math.h>
int main(){
    char day;  //m -> Monday //t -> Tuesday //w -> Wednesday , T,f , s,S
    printf("Enter day (1-7) :");
    scanf("%s",&day);

    switch(day){
        case 'm' : printf(" Monday ");
            break;
        case 't' : printf(" Tuesday ");
            break;
        case 'w' : printf(" wednesday  ");
            break;
        case 'T' : printf(" Thursday  ");
            break;
        case 'f' : printf(" friday  ");
            break;
        case 's' : printf(" Saturday  ");
            break;
        case 'S' : printf(" Sunday  ");
            break;
        default : printf(" not a valid day!");

    }
    return 0;
}