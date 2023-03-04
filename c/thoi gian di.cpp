#include<stdio.h>
void nhap();
float n,t; 
void nhap(){
	printf("nhap quang duong ");
	scanf("%f",&n); 
} 
float thoigian(float n);
float thoigian(float n){
	if(n >= 0 && n <= 3000){
		t = n*1.5; 
	} 
    else if(n > 3000 && n <= 5000){
    	t = 3000*1.5 + (n - 3000)*2.5; 
	} 
	else if(n > 5000 && n <= 6000){
		t = 3000*1.5 + 2000*2.5 + (n-5000)*4.5; 
	} 
	else{
		t = 3000*1.5 + 2000*2.5 + 1000*1.5 + (n-6000)*7.5; 
	} 
	return t; 
} 
int main(){
	nhap();
	printf("\nthoi gian can di voi quang duong %.2f la %.2f ",n,thoigian(n)); 
	 
} 
