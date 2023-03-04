#include<stdio.h>
#include<math.h>

int n;
float x,y;

int Input() {
	do {
		printf("Nhap n(5<n<30): ");
		scanf("%d",&n);
		if(n<=5 || n>=30) {
			printf("Nhap lai n cho hop le: ");
			scanf("%d",&n);
		}
	} while(n<=5 || n>=30);
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	printf("Nhap so thuc y: ");
	scanf("%f",&y);
}

void Tinh() {
	int dau = 1,i;
	float K=sqrt(1001),tu=1;
	for(i=1;i<=n;i++) {
		dau *= -1;
		tu *= x;
		K += (dau*tu+y)/(3*i);
	}
	printf("Gia tri cua bieu thuc K la: %f",K);
}

int main() {
	Input();
	Tinh();
	return 0;
}
