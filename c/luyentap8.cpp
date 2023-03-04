#include<stdio.h> 
int n,a,b;
float y;
void input(){
	do{
		printf("Nhap so nguyen n(10 <= n < 35) : ");
		scanf("%d",&n);
		if(n < 10 || n >= 35){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 10 || n >= 35);
	printf("\nNhap so thuc y : ");
	scanf("%f",&y);
	printf("\nNhap so nguyen a : ");
	scanf("%d",&a);
	printf("\nNhap so nguyen b : ");
	scanf("%d",&b);
} 
float tinhtoan(int n,float y,int a,int b){
	int dau = 1;
	int mua = 1,mub = 1;
	float tg = 1,muy = 1,kq = 0;;
	for(int i = 1;i <= n;i++){
		dau *= -1;
		mua *= a*a;
		mub *= b*b;
		tg *= y*y;
		muy = tg/y;
		kq += (float)(dau*(mua-muy))/(mub + i); 
	} 
	return kq ;
} 
int main(){
	input();
	printf("F = %f",tinhtoan(n,y,a,b));
	return 0; 
} 
