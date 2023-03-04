#include<stdio.h>
#include<math.h>
float x;
void input(){
	do{
		printf("Nhap so thuc x(-4<x<4) : ");
		scanf("%f",&x);
		if(x < -4 || x > 4){
			printf("\nNhap sai."); 
		} 
	} 
	while(x < -4 || x > 4); 
} 
float xuly(float x){
	float kq;
	kq = exp(-2*x) + sin(x) + 5*cos(x) +log(x);
	return kq; 
} 
void output(){
	printf("\nY4 = %f",xuly(x)); 
} 
int main(){
	input();
	output();
	return 0; 
} 
