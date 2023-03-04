#include<stdio.h>
float a,b,c,d;
void nhap(){
	printf("Nhap a b c d : ");
	scanf("%f%f%f%f",&a,&b,&c,&d); 
} 
float tong(float a,float b,float c,float d){
	return a+b+c+d; 
} 
float tich(float a,float b,float c,float d){
	return a*b*c*d; 
} 
float tbc(float a,float b,float c,float d){
	return (a+b+c+d)/4; 
} 
int main(){
	nhap();
	printf("\nTong cac so %.2f %.2f %.2f %.2f là %.2f",a,b,c,d,tong(a,b,c,d)); 
	printf("\nTich cac so %.2f %.2f %.2f %.2f là %.2f",a,b,c,d,tich(a,b,c,d)); 
	printf("\nTrung binh cong  cac so %.2f %.2f %.2f %.2f là %.2f",a,b,c,d,tbc(a,b,c,d)); 
	return 0; 
} 

