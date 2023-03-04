#include<stdio.h>
int n;
float a[100];
void nhapn(){
	do{
		printf("Nhap n(1<=n<=30) : ");
		scanf("%d",&n);
		if(n < 1 || n > 30){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 1 || n > 30); 
} 
void nhapmang(){
	printf("\nNhap gia tri cua cac phan tu trong mang : "); 
	for(int i = 0;i < n;i++ ){
		printf("A[%d] = ",i);
		scanf("%f",&a[i]); 
	} 
} 
void hienthinguoc(int n,float a[]){
	printf("\nMang nguoc lai vua nhap la : "); 
	for(int i =n-1;i >= 0;i--){
		printf("%f ",a[i]); 
	} 
}
void sothucx(int n,float a[]){
	int dem = 0;
	float x;
	printf("\nNhap so thuc x bat ki : ");
	scanf("%f",&x); 
	for(int i = 0;i <n;i++){
		if(x == a[i]){
			dem++ ; 
		} 
	} 
	if(dem > 0){
		printf("\nSo x xuat hien %d lan trong day",dem);
		printf("\nVi tri xuat hien cua chung la : ");
		for(int i = 0;i < n;i++){
			if(x == a[i]){
				printf("%d ",i+1); 
			} 
		} 
	}
	else{
		printf("\nSo x khong xuat hien trong mang"); 
	} 
} 
int main(){
	nhapn();
	nhapmang();
	hienthinguoc(n,a);
	sothucx(n,a);
	return 0; 
} 
