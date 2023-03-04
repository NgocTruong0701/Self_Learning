#include<stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta,x1,x2; 
	printf("nhap a =  "); 
	scanf("%f",&a);
	printf("nhap b =  "); 
	scanf("%f",&b);
	printf("nhap c =  "); 
	scanf("%f",&c);
	if(a == 0){
		// phuong trình tro thanh phuong trinh bac nhat bx+c=0 
		if(b == 0){
			if(c == 0){
				printf("phuong trinh  co vo so nghiem."); 
			} 
			else{
				printf("phuong trinh vo nghiem."); 
			} 
		} 
		else {
			printf("phuong trinh co nghiem : %f",-c/b);  
		} 
	} 
	else {
		delta = b*b - 4*a*c;
		if (delta > 0) {
			x1= (-b - sqrt(delta))/(2*a);
			x2= (-b + sqrt(delta))/(2*a);
			printf("phuong trinh co 2 nghiem phan biet :\n ");
			printf("nghiem thu nhat : %f\n",x1);
			printf("nghiem thu hai : %f",x2); 
		}
		else if (delta == 0) { 
			printf("phuong trinh co nghiem kep x1 = x2 = %f",-b/2*a); 
		}
		else {
			printf("phuong trinh vo nghiem"); 
		} 
	} 
	return 0; 
} 
