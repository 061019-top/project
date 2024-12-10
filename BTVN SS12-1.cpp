#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int soThuNhat, soThuHai, ketQua;

    printf("Nhap so thu nhat: ");
    scanf("%d", &soThuNhat);
    printf("Nhap so thu hai: ");
    scanf("%d", &soThuHai);

    ketQua = tinhTong(soThuNhat, soThuHai);

    printf("Tong cua hai so %d va %d la: %d\n", soThuNhat, soThuHai, ketQua);

    return 0;
}

