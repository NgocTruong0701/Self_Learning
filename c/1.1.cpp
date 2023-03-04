#include<stdio.h>
#include<math.h> 
int a,b;
void nhap(){
	printf("Nhap hai so a va b : ");
	scanf("%d%d",&a,&b); 
} 
int tong(int a,int b){
	return a+b; 
} 
int hieu(int a,int b){
	return a-b; 
} 
int tich(int a,int b){
	return a*b; 
} 
int thuongnguyen(int a,int b){
	return a/b; 
} 
float thuongdu(int a,int b){
	return a%b; 
} 
int main(){
	nhap();
	printf("\nTong %d va %d la : %d",a,b,tong(a,b)); 
	printf("\nHieu %d va %d la : %d",a,b,hieu(a,b)); 
	printf("\nTich %d va %d la : %d",a,b,tich(a,b)); 
	if(b == 0){
		printf("\nb = 0,khong the chia"); 
	} 
	else{
		printf("\nPhan nguyen cua phep chia cua %d va %d la %d",a,b,thuongnguyen(a,b));
		printf("\nPhan du cua phep chia cua %d va %d la %0.2f",a,b,thuongdu(a,b)); 
	} 
	return 0; 
} 
