#include<stdio.h>
#include<math.h>
float a,b,c;
float s; 
float p; 
void nhap();
void nhap(){
	printf("\nnhap 3 canh cua tam giac : ");
	scanf("%f%f%f",&a,&b,&c); 
} 
int kiemtra(float a,float b,float c); 
int kiemtra(float a,float b,float c){
	if((a + b)> c && (a + c)> b && (b + c)> a){
		printf("\n3 so thoa man 3 canh cua tam giac"); 
		printf("\ndien tich %f",s); 
	}
	else{
		printf("\n3 so khong thoa man 3 canh tam giac");
	} 
}
float dientich(float a,float b,float c);
float dientich(float a,float b,float c){
	float p =(a+b+c)/2;
	float s =sqrt((p*(p-a)*(p-b)*(p-c)));
	return s; 
} 
int main(){
	nhap();
	kiemtra(a,b,c); 
	
} 

