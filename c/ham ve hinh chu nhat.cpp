#include<stdio.h>
int chuvi(int a,int b);
int dientich(int a,int b);
void ve(int a,int b);
int chuvi(int a,int b){
	return 2*(a + b); 
} 
int dientich(int a,int b){
	return a*b; 
} 
void ve(int a,int b){
	for(int i = 1;i <= a;i++){
		for(int j = 1;j <= b;j++){
			if(i ==1 || j == 1 || i == a||j==b){
				printf("*"); 
			} 
			else{
				printf(" "); 
			} 
		} 
		printf("\n"); 
	} 
} 
int main(){
	int x,y;
	printf("nhap chieu rong va chieu dai cua hinh chu nhat : ");
	scanf("%d%d",&x,&y);
	printf("\nChu vi cua hinh chu nhat co chieu rong %d chieu lai %d la %d ",x,y,chuvi(x,y)); 
	printf("\nDien tich cua hinh chu nhat co chieu rong %d chieu lai %d la %d ",x,y,dientich(x,y));
	printf("\nHinh chu nhat : \n");
	ve(x,y); 
} 
