#include <stdio.h>

int main() {
    int number1, number2, number3, choice;

    do {
         printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
        	case 1:
        		printf("Nhap so thu nhat: ");
                scanf("%d", &number1);
                printf("Nhap so thu hai: ");
                scanf("%d", &number2);
                printf("Nhap so thu ba: ");
                scanf("%d", &number3);
                break;
            case 2:
                printf("Tong 3 so la: %d\n", number1 + number2 + number3);
                break;
            case 3:
                printf("Trung binh cong 3 so la: %.2f\n", (number1 + number2 + number3) / 3.00);
                break;
            case 4:
                if (number1<number2 && number1<number3){
                    int min = number1; 
                    if (number2 < min) {
                        min = number2; 
                }else if (number3 < min) {
                        min = number3; 
                }
                printf("So nho nhat la: %d\n", min);
                }
                break;
            case 5:
                if(number1>=number2 && number1>=number3) {
                    int max = number1; 
                    if (number2 > max) {
                        max = number2; 
                }else if (number3 > max) {
                        max = number3; 
                }
                printf("So lon nhat la: %d\n", max);
                }
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                return 0;
            default:
                printf("Khong co lua chon nay\n");
                break;
        }
    } while (1);

    return 0;
}
