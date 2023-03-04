#include<stdio.h>
int a[100];
int i,n,tg;
int gan,gan1,vt,vt1,check,check1; 
void nhapn(){
	do{
		printf("Nhap n (5 <= n <= 30): ");
		scanf("%d",&n);
		if(n < 5 || n > 30){
			printf("\nNhap lai : "); 
		} 
	} 
	while(n < 5 || n > 30);
} 
void nhapmang(){ 
	for(int i = 0;i < n ;i++){
		printf("A[%d] = ",i); 
		scanf("%d",&a[i]); 
	} 
} 
void hienthi(){
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]); 
	} 
} 
void chenmang(){
	for (int i = 0;i < n ;i ++){
		if(a[i] % 2 != 0){
			gan = a[i];
			vt = i;
			check = 1; 
			break; 
		} 
	} 
	if(check == 1){
		for(int i=n-1;i>=vt;i--){
			a[i+1]=a[i];	
		} 
		a[vt]= gan;
		n++;
		printf("\nSo le dau tien cua mang la %d o vi tri %d",gan,vt);
		printf("\nMang sau khi chen co %d phan tu la : ",n);
		for(int i = 0 ; i < n;i++){
			printf("%d ",a[i]); 
		}
	}
	else{
		printf("\nKhong co so le de chen."); 
	} 
} 
void xoamang(){
	for(int i =n-1 ;i >=0;i--) {
		if(a[i]<0){
			gan1 = a[i];
			vt1 = i;
			check1 = 1; 
			break; 
		}  
	}
	if(check1 == 1){
		for(int i = vt1;i < n;i++ ){
		a[i]= a[i+1];
	}
	n--; 
	printf("\nSo am cuoi cung cua mang la %d o vi tri %d",gan1,vt1);
	printf("\nMang sau khi xoa co %d phan tu la : ",n) ;
	for(int i = 0;i < n;i++){
		printf("%d ",a[i]); 
		}
	}
	else{
		printf("\nKhong co so am de xoa."); 
	} 
} 
void sapxep(){
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    printf("\nMang sau khi sap xep : "); 
    hienthi(); 
} 
int main(){
	nhapn();
	nhapmang();
	printf("Mang vua nhap la : ");
	hienthi();
	chenmang();
	xoamang();
	sapxep(); 
	return 0; 
} 
