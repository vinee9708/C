#include<stdio.h>
#include<math.h>
int main (){
    int a,b,ch;
    printf("enter first number : ");
    scanf("%d",&a);
    printf("enter second number : ");
    scanf("%d",&b);
    printf("enter operation : ");
    scanf(" %c",&ch);

    switch(ch){
        case '+' :  printf("%d ",a+b);
                break;
        case '-' :  printf("%d ",a-b);
                break;
        case '*' : printf("%d ",a*b);
                break;
        case '/' : printf("%d ",a/b);
                break;
        case '%' : printf("%d ",a%b);
                break;
        default:
            printf("Enter valid input");
    }
return 0;
}