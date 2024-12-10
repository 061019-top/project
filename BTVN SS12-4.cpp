#include <stdio.h>

int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = timSoLonNhat(arr, size);

    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

