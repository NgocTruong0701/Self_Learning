#include<stdio.h>
int n;
float a[100];
void input(){
	do{
		printf("Nhap so nguyen n(5<=n<=30) : ");
		scanf("%d",&n);
		if(n < 5 || n > 30){
			printf("Nhap sai."); 
		} 
	} 
	while(n < 5 || n > 30);
	printf("\nNhap mang %d so thuc",n);
	for(int i = 0; i < n;i++){
		printf("\nA[%d] = ",i); 
		scanf("%f",&a[i]) ;
	} 
} 
void output(int n,float a[]){
	printf("\nMang vua nhap la : ");
	for(int i = 0;i < n;i++){
		printf("%f ",a[i]); 
	} 
} 
void timkiem(int n,float a[]){
	float min = a[0], max = a[0],tg,vt; 
	for(int i = 0;i < n;i++){
		if(min > a[i]) {
			min = a[i]; 
		}
	} 
	for(int i = 0;i < n;i++){
		if(max < a[i]){
			max = a[i]; 
		} 
	} 
	printf("\nGia tri nho nhat trong mang la : %f",min); 
	printf("\nGia tri lon nhat trong mang la : %f",max);
	for(int i = 0;i < n;i++){
		if(a[i] == min){
			a[i]=max; 
			vt = i; 
			break; 
		}
	}  
	for(int i = 0;i <n;i++){
		if(a[i] == max && i != vt){
			a[i] = min; 
		} 
	} 
	printf("\nMang sau khi doi cho : ");
	for(int i = 0;i<n;i++){
		printf("%f ",a[i]) ;
	} 
} 
void vitri(int n,float a[]){
	int vt,check;
	float min = a[0]; 
	for(int i = 0;i<n;i++){
		if(min > a[i]){
			min = a[i];  
		} 
	}  
	for(int i = 0;i < n;i++){
		if(min == a[i]){
			vt = i;
			break; 
		} 
	} 
	for(int i = 0;i < n;i++){
		if(a[i] == min && i != vt){
			check = 1;
		} 
	} 
	if(check == 1){
		printf("\nCac vi tri co gia tri bang gia tri nho nhat : "); 
		for(int i = 0;i < n;i++){
			if(a[i] == min && i != vt){
				printf("%d ",i); 
			} 
		} 
	}
	else{
		printf("\nTrong mang khong co so nao co gia tri bang so nho nhat"); 
	} 
	
} 
int main(){
	input();
	output(n,a);
	timkiem(n,a);
	vitri(n,a);
	return 0; 
}
