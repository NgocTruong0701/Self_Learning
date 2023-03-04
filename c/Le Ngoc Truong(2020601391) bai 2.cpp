#include<stdio.h>
int a[100];
int n;
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
void sapxep(int a[],int n){
	int tg,check;
	for(int i = 0;i < n;i++){
		if(a[i] > a[i+1]){
			check = 1; 
			break; 
		}
		else{
			check = 0;
			break; 
		} 
	}
	if(check = 0){
		printf("\nMnag khong duoc sap xep giam dan") ;
		for(int i = 0; i < n - 1; i++){
       		for(int j = i + 1; j < n; j++){
           		if(a[i] > a[j]){
           			tg = a[i];
           			a[i] = a[j];
           			a[j] = tg;        
           		}
   			}
   		}
		printf("\nMang sau khi sap xep : "); 
    	hienthi();
	} 
	else{ 		
		printf("\nMang duoc xap sep giam dan"); 
	}    
}
void chenmang(){
	int check,vt,gan,d; 
	for (int i = 0;i < n ;i ++){	
		if(a[i] % 2 != 0){
			check = 1;
			d = i;
			break;
		}
	}
	vt =d; 
	for(int i = d+1;i <n;i++){
		if(a[i]%2 != 0 && a[i] < a[vt]){
			vt =i;
			gan = a[vt]; 
		} 
	} 	
	if(check == 1){
		for(int i=n;i>vt;i--){
			a[i]=a[i-1];	
		} 
		a[vt]= gan;
		n++;
		printf("\nSo le nho nhat dau tien cua mang la %d o vi tri %d",gan,vt+1);
		printf("\nMang sau khi chen co %d phan tu la : ",n);
		hienthi(); 
	}
	else{
		printf("\nKhong co so le de chen."); 
	} 
} 
void xoamang(){
	for(int i = 3;i < n;i++ ){
		a[i-1]= a[i];
	}
	n--; 
	printf("\nMang sau khi xoa co %d phan tu la : ",n) ;
	hienthi(); 
}  
int main(){
	nhapn();
	nhapmang();
	printf("Mang vua nhap la : ");
	hienthi();
	sapxep(a,n); 
	chenmang();
	xoamang(); 
	return 0; 
} 
