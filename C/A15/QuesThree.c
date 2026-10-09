#include <stdio.h>

int prime(int a);

int prime(int a) {
    if (a <= 1) {
        return 0; 
    }
    
    for (int i = 2; i * i <= a; i++) { 
        if (a % i == 0) {
            return 0; 
        }
    }
    
    return 1; 
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (prime(num)) {
        printf("Prime\n");
    } else {
        printf("Not a prime\n");
    }
    
    return 0;
}