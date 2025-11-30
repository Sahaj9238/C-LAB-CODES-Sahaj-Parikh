#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    int pos = 0, neg = 0, odd = 0, even = 0,zero=0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        if (a[i] > 0) pos++;
        else if (a[i] < 0) neg++;
        else zero++;

        if (a[i] % 2 == 0) even++;
        else odd++;
    }

    printf("\nPositive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);
    printf("Zeros:%d",zero);
    return 0;
}