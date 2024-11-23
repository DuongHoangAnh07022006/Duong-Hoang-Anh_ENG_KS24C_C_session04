#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Nh?p vào so nguyên thu nhat: ");
    scanf("%d", &a);
    printf("Nhap vào so nguyên thu hai: ");
    scanf("%d", &b);
    printf("Nhap vào so nguyên thu ba: ");
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

    printf("Các so theo thu tu tu nho den lon: %d %d %d\n", a, b, c);

    return 0;
}

