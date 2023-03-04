#include<stdio.h>
#include<math.h>
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main(){
	int a,b;
	printf("nhap 2 so a va b : ");
	scanf("%d%d",&a,&b);
	printf("\ntong 2 so %d va %d la : %d ",a,b,tong(a,b));
	printf("\nhieu 2 so %d va %d la : %d ",a,b,hieu(a,b));
	printf("\ntich 2 so %d va %d la : %d ",a,b,tich(a,b));
	if(b != 0){
		printf("\nthuong 2 so %d va %d la : %f ",a,b,thuong(a,b));
	} 
	else{
		printf("b = 0 nen khong tinh duoc thuong"); 
	} 
	return 0; 
} 
int tong(int a , int b){
	return a + b; 
} 
int hieu(int a,int b){
	return a - b; 
} 
int  tich(int a,int b){
	return a * b; 
} 
float thuong(int a,int b){
	return (float)a/b; 
} 
