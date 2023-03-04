#include<stdio.h>
#include<math.h>
int n,a,b;
float kq,p;
void nhapn(){
	do{
		printf("Nhap n(9<n<=35) : ");
		scanf("%d",&n);
		if(n <= 9||n >35 ){
			printf("\nNhap sai "); 
		}
	} 
	while(n <=9 || n > 35); 
} 
void nhapab(){
	printf("\nNhap a va b : ") ;
	scanf("%d%d",&a,&b); 
} 
float  tinhp(int a,int b,int n){
	int dau,t=1; 
	for(int i = 1 ;i <=n ;i++){
		if(i %2 == 0){
			dau = 1 ;
		} 
		else{
			dau = -1 ;
		}
		t *=a; 
		p += (float)(dau*t+i)/(b+dau*i); 
	} 
	kq = p + sqrt(2106); 
	return kq; 
} 
int main(){
	nhapn();
	nhapab();
	if(b % 2 == 0 || b > n){
		printf("P = %f",tinhp(a,b,n));
	} 
	else{
		printf("b khong thoa man dieu kien"); 
	} 
	return 0; 
} 
