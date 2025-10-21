#include <stdio.h>

int main() {
    int sodien;
    int sotien = 0;
    
    printf("nhap so dien da dung\n");
    scanf("%d", &sodien);

    if(sodien <= 100)
        sotien = sodien * 500;
    else if(sodien <= 350)
        sotien = 100 * 500 + (sodien - 100) * 550;
    else
        sotien = 100 * 500 + 250 * 550 + (sodien - 350) * 650;
    printf("so tien dien phai tra la: %d\n", sotien);
    return 0;
}