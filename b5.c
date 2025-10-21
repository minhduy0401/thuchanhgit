void bai5() {
    int soDien, tien;
    tien = 0;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &soDien);

    if (soDien <= 100)
        tien = soDien * 500;
    else if (soDien <= 350)
        tien = 100 * 500 + (soDien - 100) * 550;
    else
        tien = 100 * 500 + 250 * 550 + (soDien - 350) * 650;

    printf("Tien dien la: %d dong\n", tien);
}

