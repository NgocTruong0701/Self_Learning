#include<stdio.h>
#include<math.h> 
int n,a;
float x,y;
void nhap(){
	do{
		printf("Nhap n(4<=n<25) : ");
		scanf("%d",&n);
		if(n < 4 || n >= 25){
			printf("\nNhap sai."); 
		} 
	} 
	while(n < 4 || n >= 25);
	printf("\nNhap so nguyen a : ");
	scanf("%d",&a); 
	printf("\nNhap  so thu x : ");
	scanf("%f",&x);
	printf("\nNhap so thuc y : ");
	scanf("%f",&y);
} 
float tinhtoan(int n,int a,float x,float y){
	int dau = -1;
	float kq = sqrt(2001);
	float mu =1,mu1 =1; 
	int mu2 = 1;
	float tu;
	float mau;
	for(int i = 0;i <= n;i++){
		dau *= -1; 
		mu *=x; 
		mu1 *=y; 
		mu2 *= a*a; 
		tu = dau*(mu-mu1);
		mau = mu2+(i+1); 
		kq +=(float)tu/mau; 
	} 
	return kq; 
} 
int main(){
	nhap();
	printf("D = %.5f",tinhtoan(n,a,x,y));
	return 0; 
} 
