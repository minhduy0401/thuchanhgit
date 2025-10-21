#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Nhap so bang cuu chuong (1-9): ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

