#include <stdio.h>

int main() {
    int num;
    printf("Nhap v�o mot so nguy�n: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d l� so duong.\n", num);
    } else if (num < 0) {
        printf("%d l� so �m.\n", num);
    } else {
        printf("%d kh�ng phai so �m cung kh�ng phai so duong.\n", num);
    }

    return 0;
}

