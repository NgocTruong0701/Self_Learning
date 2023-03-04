#include<stdio.h>
int giaithua(int n);
int giaithua(int n){
	int sum = 1;
	for(int i = 1;i <= n;i++){
		sum *= i; 
	} 
	return sum; 
} 
int main(){
	int n; 
	printf("Nhap so bat ky : ");
	scanf("%d",&n);
	if( n < 1){
		printf("\nN khong thoa man,nhap lai");
	} 
	else{
		printf("\nGia thua cua so %d la : %d",n,giaithua(n)); 
	} 
	return 0; 
} 
