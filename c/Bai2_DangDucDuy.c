#include<stdio.h>

int n,a;
float x;

int Input() 
{
	do {
		printf("Nhap n(2<=n<=15): ");
		scanf("%d",&n);
		if(n<2 || n>15) 
		{
			printf("Nhap lai n cho hop le: ");
			scanf("%d",&n);
		}
	} while(n<2 || n>15);
	printf("Nhap so nguyen a: ");
	scanf("%d",&a);
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
}

void Tinh() 
{
	int dau=-1,i=1;
	float tu=x*x*x*x,Y=0;
	while(i<=n) 
	{
		dau *= -1;
		tu *= x;
		Y += (dau*(a+tu))/(2*i);
		i++;
	}
	printf("Gia tri cua bieu thuc Y = %f",Y);
}

int main() 
{
	Input();
	Tinh();
}
