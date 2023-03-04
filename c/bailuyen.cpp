#include<stdio.h>
#include<math.h>
int a,b;
float x; 
void input(){
	printf("Nhap so nguyen a : ");
	scanf("%d",&a); 
	printf("Nhap so nguyen b : ");
	scanf("%d",&b);
	printf("Nhap so thuc x : ");
	scanf("%f",&x);
} 
float output(int a,int b,float x){
	float kq; 
	if(a + b != 0){
		kq = exp(x)/(a+b);
	}
	else if(a == 0 && b == 0){
		kq = 0; 
	} 
	else {
		kq = sqrt(a*a + b*b + 100) + (sin(x)*sin(x)*sin(x));
	} 
	return kq; 
} 
int main(){
	input();
	printf("F(x)= %f",output(a,b,x));
	return 0; 
} 
