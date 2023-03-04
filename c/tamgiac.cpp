#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c;
	printf("nhap 3 canh cua tam giac : ");
	scanf("%lf%lf%lf",&a ,&b ,&c);
	if ((a + b > c) && (b + c > a) && (c + a > b)){
		double area ;
		double perimeter = a + b + c;
		double p = perimeter / 2;
		area = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("chu vi cua tam giac la : %lf\n",perimeter);
		printf("dien tich tam giac la : %lf",area); 
	} 
	else {
		printf("3 canh khong hop le,xin nhap lai");
	} 
	return 0; 
} 	
