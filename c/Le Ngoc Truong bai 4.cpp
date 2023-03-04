#include<stdio.h>
#include<math.h> 
int n;
float x,y ;
void nhap(){
	do{
		printf("Nhap n(5<n<30) : ");
		scanf("%d",&n); 
		if(n <= 5 || n >= 30){
			printf("\nNhap sai."); 
		} 
	} 
	while(n <=5 || n>=30);
	printf("Nhap x : ");
	scanf("%f",&x);
	printf("Nhap y : ");
	scanf("%f",&y); 
} 
float tinhtoan(int n,float x,float y){
	int i = 1;
	float kq = sqrt(1001);
	int dau =1;
	int tu;
	int mu = 1;
	while(i <= n){
		dau *= -1; 
		mu *= x; 
		tu = (dau*mu)+y;
		kq +=(float)tu/(3*i);
		i++; 
	} 
	return kq; 
} 
int main(){
	nhap();
	printf("K = %.5f",tinhtoan(n,x,y));
	return 0; 
} 
