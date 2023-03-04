#include<stdio.h>
int a[100];
int i,n,tg;
int gan,gan1,vt,vt1; 
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
		if(a[i] % 2 == 0){
			gan = a[i];
			vt = i;
			break; 
		} 
	} 
	for(int i =n-1;i>=vt+1;i--){
		a[i+1]=a[i];	
	} 
	a[vt]= gan;
	n++;
	
} 
void xoasoam(){
	for(int i = vt;i < n;i++ ){
		a[i-1]= a[i];
	}
	n--; 
}
void sapxep(){
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
} 
int main(){
	nhapn();
	nhapmang();
	printf("Mang vua nhap la : ");
	hienthi();
	printf("\nSo chan dau tien cua mang la %d o vi tri %d",gan,vt); 
	chenmang;
	printf("\nMang sau khi chen la : ");
	hienthi(); 
	printf("\nSo am dau cuoi cung cua mang la %d o vi tri %d",gan1,vt1);
	xoasoam();
	printf("\nMang sau khi xoa la : ") ;
	hienthi(); 
	printf("\nMang sau khi sap xep la : "); 
	sapxep();
	hienthi();
	return 0; 
}
