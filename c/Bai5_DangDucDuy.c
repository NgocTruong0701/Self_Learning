#include<stdio.h>
#include<math.h>
int a,n;
float x,y;

int Input() {
	do {
		printf("Nhap n(4<=n<25): ");
		scanf("%d",&n);
		if(n<4 || n>=25) {
			printf("Nhap lai n cho hop le: ");
			scanf("%d",&n);
		}
	} while(n<4 || n>=25);
	printf("Nhap so nguyen a: ");
	scanf("%d",&a);
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	printf("Nhap so thuc y: ");
	scanf("%f",&y);
}

void Tinh() {
	int i;
	int dau=-1,mau=1;
	float D=sqrt(2001),tu=1,tu1=1;
	for (i=0;i<=n;i++) {
		dau *= -1;
		tu *= x;
		tu1 *= y;
		mau *= a*a;
		D += (dau*(tu-tu1))/(mau+i+1) ;
	}
	printf("Gia tri cua bieu thuc D = %f",D);
}

int main() {
	Input();
	Tinh();
	return 0;
}


