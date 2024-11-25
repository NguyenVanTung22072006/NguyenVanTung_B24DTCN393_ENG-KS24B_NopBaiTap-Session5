#include <stdio.h>

int main() {
    int a, b, c, d, USCLN;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    c = a;
    d = b;

    if (a == 0 || b == 0) {
        USCLN = a + b;
    } else {
        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        USCLN = a;
    }

    printf("Boi chung nho nhat la: %d\n", c * d / USCLN);

    return 0;
}
