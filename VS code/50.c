#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf ("Enter year : " );
    scanf("%d",&x);
    
    if(( x % 400 ==0) || (x % 4 == 0 && x % 100 != 0)){
        printf (" Leap Year ");
    }
    else{
        printf(" Not a Leap year ");
    }
    return 0;
}