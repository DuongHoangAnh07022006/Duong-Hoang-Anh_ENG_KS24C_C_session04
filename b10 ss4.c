#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Nh?p v�o so nguy�n thu nhat: ");
    scanf("%d", &a);
    printf("Nhap v�o so nguy�n thu hai: ");
    scanf("%d", &b);
    printf("Nhap v�o so nguy�n thu ba: ");
    scanf("%d", &c);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("C�c so theo thu tu tu nho den lon: %d %d %d\n", a, b, c);

    return 0;
}

