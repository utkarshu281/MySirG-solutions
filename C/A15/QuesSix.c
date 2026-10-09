#include <stdio.h>

void prime(int n, int m);

void prime(int n, int m) {
    for (int i = n; i <= m; i++) {
        int flag = 1;
        if (i <= 1) {
            flag = 0;
        }
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ", i);    
        }
    }
}

int main() {
    prime(10, 50);
    return 0;
}