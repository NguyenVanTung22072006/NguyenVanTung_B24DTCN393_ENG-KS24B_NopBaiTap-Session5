#include <stdio.h>

int main(){
	int n, tong=0;
	
	printf("Nhap 1 so nguyen duong: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		tong += i;
	}
	printf("Tong so cac so tu 1 den %d la : %d", n, tong);
	
	return 0;	
}
