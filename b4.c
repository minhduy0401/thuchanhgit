#include <stdio.h>

int bt4() {
    float diemVan, diemToan, diemAnh, diemCuoiKy;

    // --- Nhập điểm từ bàn phím ---
    printf("Nhap diem mon Van: ");
    scanf("%f", &diemVan);

    printf("Nhap diem mon Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem mon Anh van: ");
    scanf("%f", &diemAnh);

    diemCuoiKy = (diemVan * 2 + diemToan * 2 + diemAnh) / 5.0;

    printf("\n=> Diem cuoi ky cua ban la: %.2f\n", diemCuoiKy);

    printf("=> Xep loai hoc luc: ");
    if (diemCuoiKy < 3.0) {
        printf("Yeu\n");
    } else if (diemCuoiKy <= 5.0) {
        printf("Trung binh\n");
    } else if (diemCuoiKy <= 7.9) {
        printf("Kha\n");
    } else {
        printf("Gioi\n");
    }

    return 0;
}
