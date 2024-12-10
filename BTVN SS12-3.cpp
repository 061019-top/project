#include <stdio.h>

int tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * tinhGiaiThua(n - 1);
}

int main() {
    int so;

    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &so);

    int ketQua = tinhGiaiThua(so);

    printf("Giai thua cua so %d la: %d\n", so, ketQua);

    return 0;
}

