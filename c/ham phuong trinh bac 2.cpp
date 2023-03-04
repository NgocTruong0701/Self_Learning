#include<stdio.h>
#include<math.h>
int xet; 
int a;
int b;
int c; 
float ptbh(int a,int b,int c);
int main(){
	printf("nhap he so a b c : ");
	scanf("%d%d%d",&a,&b,&c);
	xet = ptbh(a,b,c); 
	if(a == 0){
		printf("\na = 0 nen phuong trinh tro thanh bac nhat co nghiem x = %.2f ",(float)-c/b); 
	} 
	else{
		 if(xet == 0){
		 	printf("phuong trinh vo nghiem."); 
		 } 
		 else if(xet == 1 ){
		 	printf("phuong trinh co nghiem duy nhat x1 = x2 = %.2f",ptbh(a,b,c)); 
		 } 
		 else if(xet == 2){
		 	printf("phuong trinh co 2 nghiem phan biet : x1 = %.2f , x2 = %.2f ",ptbh(a,b,c)); 
		 } 
	} 
} 
float ptbh(int a,int b,int c){
	float denta = b*b - 4*a*c;
	if(denta < 0){
		return 0; 
	} 
	else if(denta = 0){
		xet == 1;
		float x = (float)-b/(2*a);
		return xet,x; 
	} 
	else{
		xet == 2;
		float x1 = (float)(-b - sqrt(denta))/(2*a);
		float x2 = (float)(-b + sqrt(denta))/(2*a); 
		return xet,x1,x2; 
	} 
} 
