#include<stdio.h>
#include<math.h>
int n;
float x;
void input(){
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	printf("Nhap so thuc x : ");
	scanf("%f",&x); 
} 
float tinhtoan(int n,float x){
	float kq,mux= 1; 
	if(n != 0){
		for(int i = 1;i <=n;i++){
			mux *=x; 
		}
		kq = -x + ((x*x*x)/3) + (mux/n) + 2000*exp(x); 
	} 
	else{
		kq = -1; 
	} 
	return kq; 
} 
int main(){
	input();
	printf("F = %f",tinhtoan(n,x));
	return 0; 
} 
