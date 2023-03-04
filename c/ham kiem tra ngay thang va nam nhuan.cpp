#include<stdio.h>
int checkyear(int n);
int checkyear(int n){
	if(n % 4 == 0 || n % 100 != 0 && n % 400 == 0){
		return 1; 
	} 
	return 0; 
} 
void checkngaythang(int a,int b,int n);
void checkngaythang(int a,int b,int n){
	if(b == 1 || b == 3 || b == 5 ||b == 7||b==8||b==10||b==12){
		if(a >= 1 && a <= 31){
			printf("\nNgay %d thang %d nam %d la hop le",a,b,n); 
		} 
		else{
			printf("\nngay %d thang %d nam %d khong hop le",a,b,n); 
		} 
	} 
	else if(b == 2){
		if(checkyear(n) == 1){
			if(a >= 1 && a <= 29){
				printf("\nngay %d thang %d nam %d la hop le",a,b,n); 
			}
			else{
				printf("\nngay %d thang %d nam %d khong hop le",a,b,n); 
			} 
		} 
		if(checkyear(n) == 0){
			if(a >= 1 && a <= 28){
				printf("\nngay %d thang %d nam %d la hop le",a,b,n); 
			} 
		}  
		
	} 
	else{
		if(a >= 1 && a <= 30){
			printf("\nngay %d thang %d nam %d la hop le",a,b,n); 
		} 
		else{
			printf("\nngay %d thang %d nam %d khong hop le",a,b,n);
		} 
	} 
} 
int main(){
	int a,b,n;
	printf("\nNhap so ngay : ");
	scanf("%d",&a);
	printf("\nnhap so thang : ");
	scanf("%d",&b);
	printf("\nnhap so nam : ");
	scanf("%d",&n); 
	int kt = checkyear(n);
	if(kt == 1){
		printf("\nDay la nam nhuan"); 
	} 
	else{
		printf("nDay khong phai la nam nhuan"); 
	} 
	checkngaythang(a,b,n);
	return 0; 
} 
