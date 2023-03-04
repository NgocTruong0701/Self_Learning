#include<stdio.h>
#include<math.h> 
int n,a[100]; 
void nhapn(){
	do{
		printf("Nhap so luong phan tu : ");
		scanf("%d",&n);
		if(n < 1 || n > pow(10,6)){
			printf("\nNhap sai"); 
		} 
	}
	while(n < 1 || n > pow(10,6)) ;
} 
void nhapmang(){
	for(int i = 0;i < n;i++){
		printf("\nNNhap so thu %d : ",i);
		scanf("%d",&a[i]); 
	} 
} 
void xuatmang(int a[],int n){
	printf("\nMang vua nhap la : "); 
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]);
	}
} 
int solonnhat(int n,int a[],int max){
	max = a[0];
	for(int i = 0;i < n;i++){
		 if(max < a[i]){
		 	max = a[i]; 
		 } 
	} 
	return max; 
} 
int main(){
	int max;
	nhapn();
	nhapmang();
	xuatmang(a,n); 
	printf("\nSo lon nhat trong mang la : %d",solonnhat(n,a,max));
	return 0; 
} 
