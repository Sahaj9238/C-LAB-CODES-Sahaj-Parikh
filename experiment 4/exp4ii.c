#include <stdio.h>
void abc() {
    int lv = 5; 
    printf("Local Variable= %d\n", lv);
}

int main() {
    abc();
    //printf("Local Variable outside function=%d",lc); //will give compilation error
    return 0;
}