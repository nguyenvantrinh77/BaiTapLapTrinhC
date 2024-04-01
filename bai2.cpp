#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int num) {
	int sqrt_num = sqrt(num);
	return sqrt_num * sqrt_num == num;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countAndPrintPerfectSquares(int n) {
	printf("Cac so chinh phuong nho hon %d la:\n", n);
	for (int i = 1; i < n; ++i) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}
}

int main() {
	int n;
	srand(time(NULL)); // Khởi tạo seed cho hàm random
	n = rand() % 100 + 1; // Tạo số nguyên dương ngẫu nhiên từ 1 đến 100

	printf("So nguyen duong n duoc tao ngau nhien la: %d\n", n);

	// Gọi hàm để đếm và in ra các số chính phương nhỏ hơn n
	countAndPrintPerfectSquares(n);

	return 0;
}
