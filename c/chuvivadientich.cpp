#include<stdio.h>
#include<math.h> 
int main(){
	double  a,b,c;
	printf("nhap ba canh cua tam giac : ");
	scanf("%lf%lf%lf",&a, &b, &c);
	double perimeter,p,s;
	perimeter = a + b + c;
	p = perimeter / 2;
	s = sqrt(p * (p - a)*(p - b)*(p - c));
	printf("chu vi cua tam giac : %f\n",perimeter) ;
	printf("dien tich cua tam giac la : %f",s); 
} 
