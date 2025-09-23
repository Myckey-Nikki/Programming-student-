#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d", gcd(m, n));
    return 0;
}