#include<stdio.h>
int main(){
	unsigned int n;
	printf("Nhap nam sinh cua ban : ");
	scanf("%d",&n);
	printf("\nNam sinh cua ban la %d vay tuoi cua ban la : %d ",n,2021 - n);
	return 0; 
} 
