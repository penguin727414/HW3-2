#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int a = 0, b = 1, fib;
    for (unsigned int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    unsigned int n;
    printf("輸入第幾個斐波那契數:");
    scanf("%u",&n);
    printf("第 %u 個斐波那契數是 %llu\n", n, fibonacci(n));
    return 0;
}
