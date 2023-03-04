#include<stdio.h>
#include<math.h>
int n;
float a;
void input(){
	printf("nhap so nguyen n : ");
	scanf("%d",&n);
	printf("nhap so thuc a : ");
	scanf("%f",&a);  
} 
float tinhtoan(int n,float a){
	float kq; 
	if(a != 0){
		kq = ((a*a)-(n*n))/a -((a*a*a)-(n*n))/a + sqrt(2021); 
	} 
	else{
		kq = 0; 
	} 
	return kq; 
} 
int main(){
	input();
	printf("P = %f",tinhtoan(n,a));
	return 0; 
} 
