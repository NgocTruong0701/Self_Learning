#include<stdio.h>
int n,x,y;
void nhap(){
	do{
		printf("Nhap n(5<n<30) : ");
		scanf("%d",&n);
		if(n <= 5 || n >= 30){
			printf("\nNhap sai."); 
		} 
	} 
	while(n <=5 || n >=30);
	printf("\nNhap x : ");
	scanf("%d",&x);
	printf("\nNhap y : ");
	scanf("%d",&y); 
} 
float tinhtoan(int s,int a,int b){
	int dau;
	int mu ;
	float kq = 1; 
	for(int i = 1;i <= n;i++){
		if(i % 2 == 0){
			dau = 1; 
		} 
		else{ 
			dau = -1; 
		} 
		mu *= x;
		kq += (float) (mu + (dau*y))/(n);
	} 
	return kq; 
	
} 
int main(){
	nhap();
	printf("T = %.3f",tinhtoan(n,x,y));
	return 0; 
} 
