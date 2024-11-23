#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap vao canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap vào canh thu hai: ");
    scanf("%f", &b);
    printf("Nhap vào canh thu ba: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Là 3 canh tam giác.\n");
    } else {
        printf("Không phai 3 canh tam giác.\n");
    }

    return 0;
}

