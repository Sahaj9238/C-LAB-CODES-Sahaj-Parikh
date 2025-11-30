#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    int a;
    a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(a==0){
        printf("Collinear");
    }
    else{
        printf("non collinear");
    }

    return 0;
}