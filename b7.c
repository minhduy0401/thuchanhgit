void bai7() {
    int n, i;
    long long gt = 1;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        gt *= i;

    printf("%d! = %lld\n", n, gt);
}

