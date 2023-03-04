#include<stdio.h>
#include<math.h> 
int main(){
	float r,h;
	printf("Nhap ban kinh va chieu cao cua hinh tru tron : ");
	scanf("%f%f",&r,&h);
	float Sday,Sxq,V;
	Sday = M_PI*pow(r,2);
	Sxq = 2*M_PI*r*h;
	V = Sday*h;
	printf("\nDien tich day cua hinh tru tron co ban kinh %0.2f chieu cao %0.2f la : %0.2f",r,h,Sday);
	printf("\nDien tich xung quanh cua hinh tru tron co ban kinh %0.2f chieu cao %0.2f la : %0.2f",r,h,Sxq);
	printf("\nThe tich day cua hinh tru tron co ban kinh %0.2f chieu cao %0.2f la : %0.2f",r,h,V);
	return 0; 
} 
