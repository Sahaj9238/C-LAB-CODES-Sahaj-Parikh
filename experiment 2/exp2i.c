#include <stdio.h>

int main() {
    float l, w, a, p;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);

    a = l * w;
    p = 2 * (l + w);

    printf("The area of the rectangle is: %.2f\n", a);
    printf("The perimeter of the rectangle is: %.2f\n", p);

    return 0;
}
