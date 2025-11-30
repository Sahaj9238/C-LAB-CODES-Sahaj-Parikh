#include <stdio.h>

int main() {
    float population = 100000.0;
    int years = 10;
    float rate = 0.10;

    for (int i =1; i<=years; i++) {
        population = population * (1 + rate);
        printf("End of year %d population will be=%d", i, population);
    }
    return 0;
}