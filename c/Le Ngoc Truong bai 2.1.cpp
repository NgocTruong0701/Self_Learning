#include<stdio.h>
int n,a,x; 
void nhap(){
	do{
		printf("Nhap n(2 <= n <= 15) : ");
		scanf("%d",&n);
		if(n < 2 || n > 5){
			printf("\nNhap sai."); 
		} 
	} 
	while(n < 2 || n > 5); 
	printf("\nNhap a : ");
	scanf("%d",&a);
	printf("\nNhap x : ");
	scanf("%d",&x);	 
} 
float tinhtoan(int n,int a,int x){
	int i = 1;
	int dau = -1;
	int tu;
	int mu = x*x*x*x; 
	float kq = 0; 
	while(i <= n){
		 dau *=-1;
		 mu *= x;
		 tu = dau*(a+mu);
		 kq += (float)tu/(2*i); 
		 i++; 
	} 
	return kq; 
} 
int main(){
	nhap();
	printf("Y = %.3f",tinhtoan(n,a,x));
	return 0; 
} 
