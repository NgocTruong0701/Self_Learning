#include<stdio.h>
int main(){
	int n; 
	int a[100];
	int min = a[0]; 
	int dem = 0; 
	int tong = 0; 
	int k,x;
	int vt; 
	do{
		printf("Nhap so n (5<= n <= 30) : ");
		scanf("%d",&n); 
	} 
	while(n < 5 || n > 30 ); 
	printf("\nNhap mang : ");
	for(int i = 0;i < n;i++){
		printf("phan tu thu %d : ",i);
		scanf("%d",&a[i]); 
	} 
	printf("\nMang gom %d phan tu : ",n); 
	for(int i =0 ;i < n;i++){
		printf("\na[%d] = %d",i,a[i]);
	}
	for(int i = 0 ;i < n;i++){
		if( min > a[i]){
			min = a[i]; 
			vt=i;	
		} 
		if(a[i] < 0){
			dem++;
			tong += a[i]; 
		} 
	}
	printf("\ngia tri nho nhat trong mang la : %d",min);
	printf("\ntai vi tri la %d",vt);
	printf("\ntrung binh cong cua cac so am trong mang la %d",tong/dem);
	do{
		printf("\nnhap so k (1 <= k <= n) : ");
		scanf("%d",&k);
	} 
	while(k < 1 || k > n );
	printf("\nNhap so x : ");
		scanf("%d",&x); 
		for(int i = n;i <= k-1;i--){
			a[i+1] = a[i]; 
		} 
		n = n+1;
		printf("\nmang vua chen gom %d phan tu : ",n);
		for(int i =0 ;i < n;i++){
			printf("\na[%d] = %d",i,a[i]); 
		} 
		for(int i = k;i< n;i++){
			a[i-1]=a[i]; 
		} 
		n = n-1;
		printf("\nMang sau khi xoa gom %d phan tu : ",n); 
		for(int i = 0;i < n;i++){
			printf("a[%d] = %d ",i,a[i]); 
		} 
	} 
	
	return 0; 
} 
	
}
		
	
