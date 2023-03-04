#include<stdio.h>
#include<math.h>
int n;
int a[100];
void nhapn(){
	do{
		printf("Nhap so nguyen duong n(n > 5) : ");
		scanf("%d",&n);
		if(n <= 5){
			printf("Nhap sai."); 
		} 
	} 
	while(n <= 5);
} 
void nhapmang(){
	printf("\nNhap cac phan tu vao mang : "); 
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
void tongvatbc(int n,int a[]){
	int dem = 0;
	int tong ;
	float tbc = 0; 
	int y; 
	int check = 0 ; 
	printf("\nNhap so nguyen y : ");
	scanf("%d",&y);
	for(int i = 0;i < n;i++){
		if(a[i] > 0 && y % a[i] == 0){
			check = 1; 
		} 
	} 
	if(check == 1){
		printf("\nCac phan tu la uoc cua y trong mang la : "); 
		for(int i = 0;i < n;i++){
			if(a[i] > 0 && y % a[i] == 0){
				printf("%d ",a[i]);
				tong += a[i];
				dem++; 
			} 
		} 
	tbc = tong/dem;
	printf("\nTong cua chung la : %d",tong);
	printf("\nTBC cua chung la : %f",tbc);
	} 
	else{
		printf("\nKhong co so nao trong mang la uoc cua y"); 
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
    if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
    }
    int count = 0;
    for(int i = 2; i <= sqrt(min); i++){
        if(min % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", min);
    }else{
        printf("\n%d khong phai so nguyen to",min);
    }	
} 
int main(){
	nhapn() ;
	nhapmang();
	xuatmang();
	tongvatbc(n,a);
	songuyento(n,a);
	return 0; 
} 
