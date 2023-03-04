#include<stdio.h>
#include<math.h> 
int n,a[100];
int input(){
	do{
		printf("Nhap so nguyen n(5<=n<=30) : ");
		scanf("%d",&n);
		if(n < 5 || n > 30){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 5 || n > 30);
} 
void taomang(int n,int a[]){
	a[0]= n; 
	for(int i = 1;i < n;i++){
		a[i] = n+(i*i); 
	} 
} 
void output(int n,int a[]){
	printf("\nMang theo thu tu nguoc lai la : ");
	for(int i = n -1 ;i >= 0;i--){
		printf("%d ",a[i]); 
	} 
} 
void tbc(int n,int a[]){
	int check = 0,tong = 0,dem = 0;
	for(int i = 0;i<n ;i++){
		if(a[i] % 2 == 0 && a[i] % n == 0){
			check ++;
			tong += a[i];
			dem++; 
		} 
	} 
	if(check != 0){
		printf("\nTBC cua so chan chia het cho %d la %f",n,(float)tong/dem); 
		 
	} 
	if(check == 0){
		printf("\nKhong co so chan chia het cho %d trong mang",n); 
	} 
} 
void nguyento(int n,int a[]){
	int tong = 0; 
	printf("\nCac so khong phai nguyen to la : ");
	for(int i = 0;i < n;i++){
		for(int j = 2; j <= sqrt(a[i]);j++){
			if( a[i] % j == 0){
				tong += a[i];
				printf("%d ",a[i]); 
				break; 
			} 
		}  
	} 
	printf("\nTong cac so khong phai nguyen to trong mang la %d",tong); 
} 
int main(){
	input();
	taomang(n,a);
	output(n,a);
	tbc(n,a);
	nguyento(n,a);
	return 0; 
}
