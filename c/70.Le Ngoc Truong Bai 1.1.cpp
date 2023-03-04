#include<stdio.h>
#include<math.h>
int n;
float x;
void nhap(){
	do{
		printf("Nhap so nguyen duong n : ");
		scanf("%d",&n);
		if(n < 0){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 0);
	printf("\nNhap so thuc x : ");
	scanf("%f",&x); 
} 
float tinhtoanf(int n,float x){
	float kq = 0;
	float mu = 1; 
	if(n > 1 && x != 0){
		for(int i = 1;i <=n;i++ ){
			kq += (float)i/x; 
		}
		return kq + sqrt(21) ;
	} 
	else{
		for(int i = 1; i <= n;i++){
			mu *= x;
			kq +=(float)(mu)/(2*n - i); 
		}
		return kq; 
	} 
} 
int main(){
	nhap();
	printf("F(x,n) = %f",tinhtoanf(n,x));
	return 0; 
} 
