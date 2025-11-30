 #include <stdio.h>

int main() {
    int n, i,b, count = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to find frequency of: ");
    scanf("%d", &b);

    for(i = 0; i < n; i++) {
        if(a[i] == b) {
            count++;
        }
    }

    printf("Frequency=%d", count);
    return 0;
}