#include <stdio.h>
#define PI 3.14159

int main() {
    float r,perimeter , area;

    printf("nhap vao ban kinh hinh tron (r): ");
    scanf("%f", &r);

    perimeter = 2 * PI * r;
    area = PI * r * r;

    printf("chu vi hinh tron: %.2f\n",perimeter );
    printf("dien tich hinh tron: %.2f\n", area);

    return 0;
}

