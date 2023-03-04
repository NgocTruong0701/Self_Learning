#include<stdio.h>
int n;
int a[100];
void nhapn(){
	do{
		printf("Nhap n(5 <= n <=30) : ");
		scanf("%d",&n);
		if(n < 5 || n > 30){
			printf("\nNhap sai "); 
		} 
	}
	while(n < 5 || n > 30); 
} 
void nhapmang(){
	printf("Nhap mang : ");
	for(int i = 0 ; i < n ;i++){
		printf("A[%d] = ",i); 
		scanf("%d",&a[i]); 
	} 
} 
void xuatmang(){
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]);
	} 
} 
void chenmang(){
	int gan,vt,check; 
	for(int i = 0;i < n ;i++){
		if(a[i]%2==0){
			gan = a[i];
			vt = i;
			check = 1; 
			break; 
		} 
	} 
	if(check == 1){
		for(int i = n -1;i >=vt;i--){
			a[i+1]=a[i]; 
		} 
		a[vt]=gan;
		n++; 
		printf("\nSo chan xuat hien dau tien cua mang la %d o vi tri %d",gan,vt+1);
		printf("\nMang sau khi chen co %d phan tu : ",n);
		xuatmang();
	}
	else{
		printf("\ntrong mang khong co so chan ."); 
	} 
		
} 
void xoamang(){
	int gan,vt,check; 
	for(int i =n-1 ;i >=0;i--) {
		if(a[i]<0){
			gan = a[i];
			vt = i;
			check = 1; 
			break; 
		}  
	}
	if(check == 1){
		for(int i = vt;i < n;i++ ){
		a[i]= a[i+1];
	}
	n--; 
	printf("\nSo am cuoi cung cua mang la %d o vi tri %d",gan,vt+1);
	printf("\nMang sau khi xoa co %d phan tu la : ",n) ;
	xuatmang(); 
	}
	else{
		printf("\nTrong mang khong co so am de xoa."); 
	} 
}  
void sapxep(int a[],int n) {
	int tg; 
	for(int i = 0;i < n;i++){
		for(int j = i+1;j < n;j++){
			if(a[i] > a[j]){
				tg =a[i]; 
				a[i]=a[j];
				a[j]=tg; 
			} 
		} 
	} 
	printf("\nMang sau khi sap xep : ");
	xuatmang(); 
}
int main(){
	nhapn();
	nhapmang();
	printf("\nMang vua nhap la : "); 
	xuatmang();
	chenmang();
	xoamang();
	sapxep(a,n);
	return 0; 
} 
