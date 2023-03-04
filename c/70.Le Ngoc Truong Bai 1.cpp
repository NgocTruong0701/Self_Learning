#include<stdio.h>
#include<math.h>
int n;
float a;
void nhapnvaa(){
	do{
		printf("Nhap so nguyen duong n : ");
		scanf("%d",&n);
		if(n < 0){
			printf("\nNhap sai."); 
		} 
	} 
	while(n < 0);
	printf("\nNhap so thuc a : ");
	scanf("%f",&a); 
} 
float tinhtoanp(int n,float a){
	int dau = -1;
	float mu1 = a;
	int mu2 = n*n;
	float kq = sqrt(22);
	for(int i = 1;i <=11;i++){
		dau *= -1;
		mu1 *= a;
		kq += (dau*(mu1 - mu2))/(2*i);
	} 
	return kq; 
} 
int main(){
	nhapnvaa();
	printf("P = %f",tinhtoanp(n,a));
	return 0; 
} 
