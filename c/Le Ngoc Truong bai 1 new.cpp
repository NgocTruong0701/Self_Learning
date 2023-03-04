#include<stdio.h>
#include<math.h>
int n,a,b;
float p = 0,kq = 0; 
void nhapn(){
	do{
		printf("Nhap n (9 < n <= 35) : ");
		scanf("%d",&n); 
		if(n <= 9 || n > 35){
			printf("\nNhap sai."); 
		} 
	} 
	while(n <=9 || n > 35 );
}
void nhapab(){
	printf("\nNhap a va b : ");
	scanf("%d%d",&a,&b); 
} 
float tinhp(){
	for(int i = 1 ; i <=n;i++){
		kq += (float)(pow(-1,i)*pow(a,i+1)+i)/(b +pow(-1,i)*i); 
	} 
	p = kq +  sqrt(2106);
	return p ;
} 
int main(){
	nhapn();
	nhapab();
	if(b % 2 == 0 || b > n){
		printf("P = %.3f",tinhp());
	} 
	else{
		printf("do co truong hop mau = 0,khong the chia,moi nhap b lai."); 
	} 
	return 0 ;
} 
