#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c; // ba c?nh
	double perimeter = 0; // chu vi
	double area = 0; // di?n t�ch
	
	// nh?p v�o ba c?nh
	printf("%s", "Nhap vao ba canh tam giac: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	// ki?m tra dk tam gi�c
	if((a + b > c) && (b + c > a) && (c + a > b)) {
		// t�nh chu vi
		perimeter = a + b + c;
		// t�nh di?n t�ch
		double p = perimeter / 2;
		area = sqrt(p * (p - a)*(p - b)*(p - c));
		
		// k?t lu?n
		printf("%s%2.2lf\n", "Chu vi tam giac: ", perimeter);
		printf("%s%2.2lf\n", "Dien tich tam giac: ", area);
	} else {
		puts("Vui long nhap 3 canh tam giac!");
	}
			
	return 0;
} 

