#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    printf("enter initial capital ");
    scanf("%d",&x);
    printf("enter final capital ");
    scanf("%d",&y);

    if(y>x){
        printf("profit");
    
    }
    else if(x>y){
        printf("loss");
    }
    else{
        printf("no profit no loss ");
    }
    return 0;
}