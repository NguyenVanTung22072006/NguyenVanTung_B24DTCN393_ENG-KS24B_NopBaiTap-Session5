#include <stdio.h>

int main() {
    int number1, number2, choice;

    printf("Nhap vao 2 so bat ky:\n");
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);
    

    printf("CALCULATOR\n");
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tich 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Tong cua %d va %d la: %d\n", number1, number2, number1 + number2);
            break;
        case 2:
            printf("Hieu cua %d va %d la: %d\n", number1, number2, number1 - number2);
            break;
        case 3:
            printf("Tich cua %d va %d la: %d\n", number1, number2, number1 * number2);
            break;
        case 4:
            printf("Thuong cua %d va %d la: %.2f\n", number1, number2, (float)number1 / number2);
            break;
        case 5:
            printf("Thoat chuong trinh\n");
            return 0;
        default:
            printf("Khong co lua chon nay\n");
            break;
    }


    return 0;
}
    

