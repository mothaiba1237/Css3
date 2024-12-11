#include <stdio.h>

int main() {
    float canh, chieucao, dientich;

    printf("nhap do dai canh cua tam giac: ");
    scanf("%f", &canh);
    printf("nhap chieu cao cua tam giac: ");
    scanf("%f", &chieucao);

    dientich = 0.5 * canh * chieucao;

    printf("dien tich cua tam giac la: %.2f\n", dientich);

    return 0;
}

