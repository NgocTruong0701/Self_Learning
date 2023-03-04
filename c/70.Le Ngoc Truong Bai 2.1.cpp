#include<stdio.h>
int n,a[100];
void nhapnnn(){
	do{
		printf("Nhap so nguyen n(n > 5) : ");
		scanf("%d",&n);
		if(n < 5 || n >= 30){
			printf("Nhap sai."); 
		}
	} 
	while(n < 5 || n >= 30);
} 
void nhapmangaa(){
	printf("\nNhap cac phan tu cua mang : "); 
	for(int i = 0;i< n;i++){
		printf("A[%d] = ",i);
		scanf("%d",&a[i]); 
	} 
} 
void xuatmangaa(){
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]); 
	} 
} 
void xuly(int n,int a[]){
	int tong = 0;
	int dem = 0,check = 0;  
	for(int i = 0;i < n;i++ ){
		if(a[i] % 2 == 0&&i %2 != 0){
			check++; 
		} 
	} 
	if(check != 0){
		printf("\nCac phan tu chan o vi tri le trong mang la : "); 
		for(int i = 0;i< n;i++){
			if(a[i] % 2 == 0 && i % 2 != 0){
				printf("%d ",a[i]);
				tong += a[i];
				dem++ ;
			}  
		}
		printf("\nTong cua chung la : %d",tong);
		printf("\nTBC cua chung la : %f",(float)tong/dem);
	} 
	else{
		printf("\nTrong mang khong co phan tu nao chan o vi tri le"); 
	} 
} 
void duongnn(int n,int a[]){
	int min,vt;
	for(int i = 0;i < n;i++){
		if(a[i] > 0){
			min = a[i] ;
		} 
	} 
	for(int i = 0;i <n;i++){
		if(min > a[i] && a[i] > 0 ){
			min = a[i]; 
		} 
	} 
	for(int i = 0;i < n;i++){
		if(min = a[i]){
			vt = i;
			break; 
		} 
	} 
	printf("\nSo duong nho nhat trong mang la : %d",min);
	printf("\nO vi tri thu %d",vt+1); 
} 
void xoa(){
	int x; 
	int check,vt;
	 
	printf("\nNhap so x : ");
	scanf("%d",&x);
	for(int i = 0;i <n;i++){
		if(x < a[i]){
			check = 1;
			vt = i;
			break; 
		} 
	} 
	if(check == 1){
		for(int i = vt;i < n;i++){
			a[i] = a[i+1]; 
		} 
		n--;
		xuatmangaa(); 
	} 
	else{
		printf("\nKhong co gia tri nao lon hon x"); 
	} 
} 
int main(){
	nhapnnn();
	printf("\nMang vua nhap la :"); 
	nhapmangaa();
	xuatmangaa();
	xuly(n,a); 
	duongnn(n,a);
	xoa();
	return 0; 
} 
