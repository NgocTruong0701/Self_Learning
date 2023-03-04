#include<stdio.h>
#include<math.h>
int main(){
	float a , b , c; 
	printf("nhap he so a , b , c : ");
	scanf("%f%f%f",&a ,&b ,&c); 
	if (a == 0){
		printf("phuong trinh tro thanh phuong trinh bac nhat bx + c = 0");
		double x = - c / b; 
		printf("\nnghiem cua phuong trinh bac nhat la : %0.1lf",x); 
	} 
	else {
		int dental = b*b - 4*a*c ;
		if (dental < 0){
			printf("phuong trinh vo nghiem"); 
		} 
		else if(dental == 0){
			printf("phuong trinh co nghiem kep x1 = x2 = %0.1f",-b/(2*a));
		}
		else {
			float x1, x2 ;
			x1 = (-b - sqrt(dental)) / (2 * a);
			x2 = (-b + sqrt(dental)) / (2 * a);
			printf("phuong trinh co hai nghiem phan biet :");
			printf("\nx1 = %0.1f",x1);
			printf("\nx2 = %0.1f",x2); 
		} 
	}
	return 0; 
} 
