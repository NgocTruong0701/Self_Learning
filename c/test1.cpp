#include<stdio.h>
#include<conio.h> 
int a,b;
int tong(int a,int b){
	return a+b; 
} 
int hieu(int a,int b){
	return a-b; 
} 
int tich(int a,int b){
	return a*b; 
} 
float thuong(int a,int b){
	return (float)a/b; 
} 
int main(){
	char luachon; 
	printf("Nhap so :");
	printf("\n0.De thoat");
	printf("\n1.De cong 2 so.");
	printf("\n2.De tru 2 so.");
	printf("\n3.De nhan 2 so.");
	printf("\n4.De chia 2 so.\n");
	scanf("%c",&luachon);
	switch(luachon){
		case '0':
		break;
		case '1':{
			printf("\nNhap 2 so a va b : ");
			scanf("%d%d",&a,&b);
			printf("\n%d + %d = %d", a,b,tong(a,b));
			break;
		} 
		case '2':{
			printf("\nNhap 2 so a va b : ");
			scanf("%d%d",&a,&b);
			printf("\n%d - %d = %d", a,b,hieu(a,b));
			break;
		} 
		case '3':{
			printf("\nNhap 2 so a va b : ");
			scanf("%d%d",&a,&b);
			printf("\n%d * %d = %d", a,b,tich(a,b));
			break;
		} 
		case '4':{
			printf("\nNhap 2 so a va b : ");
			scanf("%d%d",&a,&b);
			printf("\n%d / %d = %.2f", a,b,tong(a,b));
			break;
		} 
	}
	return 0; 
} 
