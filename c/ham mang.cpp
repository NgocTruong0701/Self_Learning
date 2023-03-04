#include<stdio.h>
int n;
int arr[200];
int dem = 0; 
int tong = 0; 
void nhap();
void nhap(){
	printf("Nhap so luong cua day la : ");
	scanf("%d",&n);
	printf("\nNhap cac so hang trong day la : ");
	for(int i = 0;i < n;i++){
		printf("A[%d] = ",i);
		scanf("%d",&arr[i]); 
	} 
}
//cau A :
int mangchan(int n,int arr[]);
int mangchan(int n,int arr[]){
	for(int i = 0;i < n;i++){
		if(arr[i] % 2 == 0){
			dem++; 
		} 
	} 
	return dem; 
} 
//cau B :
int tongcacsoduong(int n,int arr[]);
int tongcacsoduong(int n,int arr[]){
	for(int i = 0;i < n;i++){
		if(arr[i] > 0){
			tong += arr[i]; 
		} 
	} 
	return tong; 
} 
int maxnumber = arr[0]; 
//cau C :
int solonnhat(int n,int arr[]);
int solonnhat(int n,int arr[]){
	for(int i = 0;i < n;i++){
		 if(arr[i] > maxnumber){
		 	maxnumber = arr[i]; 
		 } 
	} 
	return maxnumber; 
} 
int main(){
	nhap();
	printf("\nCo %d so chan trong day",mangchan(n,arr));
	printf("\nTong cac so duong trong day la : %d",tongcacsoduong(n,arr));
	printf("\nSo lon nhat trong day la : %d",solonnhat(n,arr));
	return 0; 
} 
