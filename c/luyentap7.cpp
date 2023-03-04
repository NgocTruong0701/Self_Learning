#include<stdio.h>
int n;
float x;
void input(){
	do{
		printf("Nhap so nguyen duong n : ");
		scanf("%d",&n);
		if(n < 0){
			printf("Nhap sai."); 
		} 
	} 
	while(n< 0);
	printf("\nNhap so thuc x bat ki : ");
	scanf("%f",&x); 
} 
float tinhtoan(int n,float x){
	float kq =0;
	float tong = 0; 
	int dau = -1;
	float mu = 1; 
	if(n > 1 && x != -2){
		for(int i = 1;i <=n;i++){
			kq +=(i*i)/(x+2); 
		} 
	} 
	else{
		for(int i = 0;i < n;i++){
			dau *= -1;
			mu *= x;
			tong += dau*mu; 
		}
		kq = tong + 2008; 
	}
	return kq; 
} 
int main(){
	input();
	printf("F(%0.4f,%d) = %f",x,n,tinhtoan(n,x));
	return 0; 
} 
