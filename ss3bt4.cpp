#include <stdio.h>

int main() {
    float toan, van, anh, tongdiem, diemtrungbinh;

    printf("nhap diem toan: ");
    scanf("%f", &toan);
    printf("nhap diem van: ");
    scanf("%f", &van);
    printf("nhap diem anh: ");
    scanf("%f", &anh);

    tongdiem = toan + van + anh;
    diemtrungbinh = tongdiem / 3;

    printf("tong diem: %.2f\n", tongdiem);
    printf("diem trung binh: %.2f\n", diemtrungbinh);

    return 0;
}

