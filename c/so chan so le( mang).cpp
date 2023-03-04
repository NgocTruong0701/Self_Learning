#include<stdio.h>
int main(){
	unsigned int n;
	unsigned int arr[1000];
	printf("nhap gioi han cua day so : ");
	scanf("%d",&n);
	printf("\nnhap cac so khong am : ");
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]); 
	}
	printf("\nday cac so le la : ") ;
	for(int i = 0; i < n;i++){
		if(arr[i] % 2 != 0){
			printf("%d ",arr[i]); 
		}  
	} 
	printf("\nday cac so chan la :"); 
	for(int i = 0; i < n;i++){
		if(arr[i] % 2 == 0){
			printf("%d ",arr[i]); 
		} 
	} 
	return 0; 
} 
