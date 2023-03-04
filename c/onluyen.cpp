#include<stdio.h>
#include<math.h> 
int n;
float x;
void nhap(){
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	printf("\nNhap so thuc x : ");
	scanf("%f",&x); 
} 
float tinhtoan(int n,float x){
	float kq,mu;
	if(n > 1 && x != 0){
		kq = sqrt(21);
		for(int i = 1; i <= n;i++){
			kq += i/x; 
		} 
	} 
	else{
		mu = 1;
		for(int i = 1;i <= n ;i++){
			mu *= x;
			kq += mu/(2*n - i); 
		} 
	} 
	return kq; 
} 
int main(){
	nhap();
	printf("F(x,n) = %f",tinhtoan(n,x));
	return 0; 
} 
