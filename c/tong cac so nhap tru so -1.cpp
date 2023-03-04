#include<stdio.h>
int a;
int dem = 0;
int tong = 0; 
int main(){
	do{
		printf("nhap cac so : ");
		scanf("%d",&a);
		dem += 1; 
		tong += a ; 
	} 
	while (a != -1);
	printf("\nCo %d so duoc nhap.",dem-1);
	printf("\nTong cac so do : %d",tong);
	return 0; 
} 
