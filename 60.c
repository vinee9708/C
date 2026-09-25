#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D,root1 ,root2;
    printf("enter a ");
    scanf("%f",&a);
    printf("enter b ");
    scanf("%f",&b);
    printf("enter c ");
    scanf("%f",&c);

    D = b*b - 4*a*c;
    if (D>0){
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (D == 0) {
        root1 = -b / (2 * a);

        printf("Both roots = %.2f\n", root1);
    }
    else {
        printf("Roots are complex.\n");
    }

    return 0;
}
