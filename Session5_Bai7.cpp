#include <stdio.h>

int main() {
    int a, b, USCLN;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

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

    printf("Uoc chung lon nhat la: %d\n", USCLN);

    return 0;
}
