#include<stdio.h>
#include<math.h>
int giaithua(int k);
int sum = 1;
int giaithua(int k){
	int sum = 1;
	for(int i = 1;i <= k;i++){
		sum *= i; 
	} 
	return sum; 
} 
float tinhe(float x,int n){
	float kq = 0 ;
	for(int i = 0;i<=n;i++){
		kq += (pow(x,2*i)/giaithua(i));
	} 
	return kq; 
}
int main(){
	int n;
	float x;
	printf("nhap x va n : ");
	scanf("%f%d",&x,&n);
	if(n <= 5 || n >= 30){
		printf("\nnhap n sai dieu kien,nhap lai ");
	}
	else{
		printf("ket qua cua e^(x) la : %f",tinhe(x,n)) ;
	} 
}
	 
 
