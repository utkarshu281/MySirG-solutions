#include <stdio.h>

int main() {
    int a = 5;
    int *x = &a;

    printf("address stored in x : %p\n", (void *)x);
    printf("address of a        : %p\n", (void *)&a);   // same as above
    printf("address of x itself : %p\n", (void *)&x);
    printf("value at address    : %d\n", *x);
    return 0;
}
