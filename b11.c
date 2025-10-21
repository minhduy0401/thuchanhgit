#include <stdio.h>

void inHinhSao(int N) {
    printf("Hinh sao voi N = %d:\n", N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main ()
{
    printf("Nhap N (de in hinh sao): ");
    scanf("%d", &N);
    inHinhSao(N);
    return 0;
}