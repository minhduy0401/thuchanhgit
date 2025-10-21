#include <stdio.h>

int main() {
    int n;
    long long gt = 1;

    printf("Nhap n: ");
    scanf("%d", &n);
    
    int i;

    for (i = 1; i <= n; i++)
        gt *= i;

    printf("%d! = %lld\n", n, gt);

    return 0;
}

