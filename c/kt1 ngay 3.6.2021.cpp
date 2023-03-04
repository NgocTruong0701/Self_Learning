#include<stdio.h> 
#include<math.h> 
int n;
float a;
void nhap(){
	do{
		printf("Nhap so nguyen duong n : ");
		scanf("%d",&n);
		if(n < 0){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 0);
	printf("\nNhap so thuc a : ");
	scanf("%d",&a); 
} 
float tinhtoan(int n,float a){
	int dau = -1;
	int mu1 = 1;
	float mu2 = 1; 
	float kq = 0; 
	for(int i = 1;i <=10;i++){
		dau *= -1;
		mu1 *= n;
		mu2 *= a;
		kq += ((dau)*mu1*mu2)/(2*i); 
	} 
	kq += sqrt(n + 10);
	return kq; 
} 
int main(){
	nhap();
	printf("P(a,n) = %f",tinhtoan(n,a));
	return 0; 
} 
