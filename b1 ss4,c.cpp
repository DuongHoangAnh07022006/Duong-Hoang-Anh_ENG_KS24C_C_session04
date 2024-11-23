#include <stdio.h>

int main() {
    int num;
    printf("Nhap vào mot so nguyên: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("%d là so duong.\n", num);
    } else if (num < 0) {
        printf("%d là so âm.\n", num);
    } else {
        printf("%d không phai so âm cung không phai so duong.\n", num);
    }

    return 0;
}

