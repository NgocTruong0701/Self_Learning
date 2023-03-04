#include<stdio.h>
int giathua(int n);
int giaithua(int n){
	int sum =1; 
	for(int i = 1;i <= n;i++){
		sum *= i; 
	} 
	return sum; 
} 	 
int main(){
	int n,k;
	printf("Nhap co so n : ");
	scanf("%d",&n);
	printf("\nNhap to hop chap k : ");
	scanf("%d",&k);
	if(n < k){
		printf("\nKhong thoa man"); 
	} 
	else{
		float s =(float)giaithua(n)/(giaithua(k)*giaithua(n-k));
		printf("C(n,k) = C(%d,%d) = %0.2f",n,k,s); 
	} 
	 
	return 0; 
} 
