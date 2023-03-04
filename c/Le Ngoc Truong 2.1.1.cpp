#include<stdio.h>
int a,x,n; 
void nhapn(){
	do{
		printf("Nhap n(2<=n<=15) : ");
		scanf("%d",&n);
		if(n < 2 || n > 15){
			printf("\nNhap sai."); 
		} 
	} 
	while(n < 2 || n > 15);
} 
void nhapax(){
	printf("\nNhap a : ");
	scanf("%d",&a);
	printf("\nNhap x : ");
	scanf("%d",&x);
}
float tinhtoan(int n,int a,int x){
	int i =1; 
	int mu = x*x*x*x;
	int dau;
	int tu ;
	float kq =0; 
	while(i <=n){
		if(i % 2 == 0){
			dau = -1; 
		} 
		else{
			dau = 1; 
		} 
		mu *= x;
		tu = dau*(a+mu);
		kq += (float)tu/(2*i);
		i++; 
	} 
	return kq; 
} 
int main(){
	nhapn();
	nhapax();
	printf("Y = %.3f",tinhtoan(n,a,x));
	return 0; 
} 
