#include<stdio.h>
int n,a[100];
void input(){
	do{
		printf("Nhap so nguyen n(1<n<=30) : ");
		scanf("%d",&n);
		if(n <= 1 || n > 30){
			printf("\nNhap sai."); 
		} 
	} 
	while(n <= 1|| n > 30); 
	printf("\nNhap gia tri cac phan tu cua mang : ");
	for(int i = 0; i < n;i++){
		printf("\nA[%d] = ",i);
		scanf("%d",&a[i]); 
	} 
} 
void output(int n,int a[]){
	printf("\nMang vua nhap la : ");
	for(int i = 0 ; i < n;i++){
		printf("%d ",a[i]); 
	} 
} 
void tong(int n,int a[]){
	int tong = 0;
	for(int i = 0;i< n;i++){
		if(a[i] % 2 == 0 && a[i] % 3 == 0){
			tong += a[i]; 
		} 
	} 
	printf("\nTong cac so chia het cho 3 va 2 trong day la : %d",tong); 
} 
void dem(int n,int a[]){
	int dem = 0;
	for(int i = 0;i < n;i++){
		if(a[i] > 0 && a[i] > 5){
			dem++; 
		} 
	} 
	printf("\ncac so duong lon hon 5 trong day la : %d",dem); 
} 
void chen(){
	int x,k; 
	printf("\nNhap so nguyen x : ");
	scanf("%d",&x);
	do{
		printf("\nNhap so nguyen k(k >= 1) : ");
		scanf("%d",&k); 
		if(k < 1 || k > n ){
			printf("\nNhap lai."); 
		} 
	} 
	while(k < 1 || k > n);
	for(int i = n-1;i >= k-1;i--){
		a[i+1] = a[i]; 
	} 
	a[k-1] = x;
	n++;
	printf("Mang vua chen la : ");
	for(int i = 0; i < n;i++){
		printf("%d ",a[i]); 
	} 
} 
int main(){
	input();
	output(n,a);
	tong(n,a);
	dem(n,a);
	chen();
	return 0; 
} 
