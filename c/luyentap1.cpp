#include<stdio.h>
int n,a[100];
void input(){
	do{
		printf("Nhap n (5<=n<=30) : ");
		scanf("%d",&n);
		if(n < 5 || n > 30 ){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 5 || n > 30);
} 
void taomang(int n,int a[]){
	a[0] = 31;
	for(int i = 1;i < n;i++){
		a[i] = n*(i*i); 
	} 
} 
void output(int n,int a[]){
	printf("\nMang do la : ");
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]); 
	} 
}
void xuly(int n,int a[]){
	int tong = 0,dem = 0;
	for(int i = 0;i < n;i++){
		if(a[i] % n == 0 && a[i] % 2 != 0){
			tong += a[i];
			dem++;  
		} 
	} 
	printf("\nTrung binh cong cua cac so le chia het cho n trong mang la %f",(float)tong/dem); 
} 
void demcap(int n,int a[]){
	int dem = 0; 
	for(int i = 0;i < n;i++){
		if(a[i] % 2 != 0 && a[i+1] % 2 != 0){
			dem++; 
		} 
	} 
	printf("\nTrong mang co %d cap so le lien tiep",dem); 
} 
int main(){
	input();
	taomang(n,a);
	output(n,a);
	xuly(n,a);
	demcap(n,a);
	return 0; 
} 
