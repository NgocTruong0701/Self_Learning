#include<stdio.h>
int n;
int a[100];
void input(){
	do{
		printf("nhap so nguyen duong n : ");
		scanf("%d",&n);
		if(n < 0){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 0); 
} 
void inputmang(){
	printf("\nnhap gia tri cac phan tu trong mang : ");
	for(int i = 0;i < n;i++){
		printf("A[%d] = ",i);
		scanf("%d",&a[i]); 
	} 
} 
void output(int n,int a[]){
	printf("\nmang vua nhap la : ");
	for(int i = 0;i<n;i++){
		printf("%d ",a[i]); 
	} 
} 
void uocchung(int n,int a[]){
	int y,check,dem = 0,tong = 0;
	float tbc; 
	printf("\nnhap so nguyen duong y : ");
	scanf("%d",&y);
	for(int i = 0;i<n;i++){
		if(a[i] > 0 && y % a[i] == 0){
			check = 1;
			tong += a[i];
			dem++; 
		} 
	} 
	if(check == 1){
		printf("\ncac phan tu duong trong mang la uoc cua y : ");
		for(int i = 0;i <n;i++){
			if(a[i] > 0 && y % a[i] == 0){
				printf("%d ",a[i]); 
			}
		} 
		printf("\nTong cua chung la : %d",tong);
		printf("\nnTCB cua chung la : %f",(float)tong/dem); 
	} 
	else{
		printf("\nTrong mang khong co phan tu nao duong la uoc cua y"); 
	} 
} 
void xoamang(){
	int min = a[0],vt; 
	for(int i = 0;i <n;i++){
		if(min > a[i]){
			min = a[i];
			vt = i; 
		} 
	} 
	if(min == a[0]){
		printf("\nDo gia tri nho nhat o vi tri dau tien ne khong the xoa"); 
	} 
	else{
		for(int i = vt;i <n;i++){
			a[i-1] = a[i] ;
		} 
		n--;
		printf("\nMang sau khi xoa : ");
		for(int i = 0;i <n;i++){
			printf("%d ",a[i]); 
		} 
	}
} 
int main(){
	input();
	inputmang();
	output(n,a);
	uocchung(n,a);
	xoamang();
	return 0; 
} 
