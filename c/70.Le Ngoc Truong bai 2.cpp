#include<stdio.h>
#include<math.h> 
int n,a[100];
void nhapn(){
	do{
		printf("Nhap so nguyen duong n (n > 5) : ");
		scanf("%d",&n);
		if(n <= 5){
			printf("Nhap sai.") ;
		} 
	} 
	while(n <= 5); 
} 
void nhapmang(){
	printf("\nNhap cac phan tu cua mang : ");
	for(int i = 0;i < n;i++){
		printf("\nA[%d] = ",i);
		scanf("%d",&a[i]);
	}
} 
void xuatmang(){
	printf("\nMang vua nhap la : ");
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]); 
	} 
} 
void songuyenduongy(int n,int a[]){
	int y;
	int dem =0,tong = 0,check = 0;
	do{
		printf("\nNhap so nguyen duong y : ");
		scanf("%d",&y);
		if(y < 0){
			printf("\nNhap sai dieu kien"); 
		} 
	} 
	while(y < 0); 
	for(int i = 0;i < n;i++){
		if(a[i] > 0 && y % a[i] == 0){
			check = 1; 
		} 
	} 
	if(check == 1){
		printf("\nCac phan tu duong la uoc cua y trong mang la : ");
		for(int i = 0;i < n;i++){
			if(a[i] > 0 && y % a[i] == 0 ){
				printf("%d ",a[i]); 
				dem ++;
				tong += a[i]; 
			} 
		} 
		printf("\nTong cua chung la : %d",tong);
		printf("\nTBC cua chung la %f",(float)tong/dem); 
	} 
	else{
		printf("\nTrong mang khong co so nao duong la uoc cua y"); 
	} 	 
} 
void songuyento(int n,int a[]){
	int min = a[0]; 
	for(int i = 0;i < n;i++){
		if(min > a[i]){
			min = a[i]; 
		} 
	}
	printf("\nSo nho nhat la: %d",min); 
	if(min < 2){
    	printf("\n%d khong phai so nguyen to", min);
    }
    else{
    	int count = 0;
    	for(int i = 2; i <= sqrt(min); i++){
       		if(min % i == 0){
          	  	count++;
        	}
    	}
    	if(count == 0){
        	printf("\n%d la so nguyen to", min);
    	}else{
        	printf("\n%d khong phai so nguyen to", min);
    	}
	}
} 
int main(){
	nhapn();
	nhapmang();
	xuatmang();
	songuyenduongy(n,a);
	songuyento(n,a);
	return 0; 
} 
