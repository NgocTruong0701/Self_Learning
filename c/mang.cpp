#include<stdio.h>
int main(){
	int arr[200];
	int n;
	printf("Nhap so luong day : ");
	scanf("%d",&n);
	printf("\nnhap cac so trong day : "); 
	for(int i = 0 ;i < n ;i++){
		printf("\nA[%d] : ",i);
		scanf("%d",&arr[i]); 
	} 
	int dem = 0;
	int tong = 0; 
	int maxnumber = arr[0]; 
	for(int i = 0;i < n;i++){ 
		if(arr[i] % 2 == 0){
			dem++; 
		}
		if(arr[i] > 0){
			tong += arr[i]; 
		} 
		if(arr[i] > maxnumber){
			maxnumber = arr[i]; 
		} 
	}  
	printf("\nSo luong cac so chan trong day la : %d",dem);
	printf("\nTong cac so nguyen duong la : %d",tong);
	printf("\nSo lon nhat co trong day la : %d",maxnumber);
	return 0; 
} 
