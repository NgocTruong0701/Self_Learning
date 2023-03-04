#include<stdio.h>
#include<math.h> 
int n,a,b,y;
float p = 0; 
void nhapn(){
	do{
		printf("Nhap n (9 < n <= 35) : "); 
		scanf("%d",&n); 
		if(n <= 9 || n > 35){
			printf("nhap lai : "); 
		} 
	} 
	while(n <= 9 || n > 35 ); 
}	
void nhapab(){
	printf("\nNhap 3 so a b va y : ");
	scanf("%d%d%d",&a,&b,&y); 
} 
float tinhP(int n,int a,int b){
	for(int i = 1;i <=n;i++){
		p = (float)(pow(-1,n)*pow(a,2*i)-pow(y,2*i-1))/(pow(b,2*i)+i); 
	} 
	return p; 
} 
int main(){
	nhapn();
	nhapab();
	printf("P = %0.3f",tinhP(n,a,b));
	return 0; 
} 
