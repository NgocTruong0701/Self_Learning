#include<stdio.h>
#include<math.h>
float th1(int a,int b,float x);
float th1(int a,int b,float x){
	float kq = exp(x) / (a+b);
	return kq;  
}
float th3(int a,int b,float x);
float th3(int a,int b,float x){
	float k = sqrt(a*a + b*b + 100) + pow(sin(x),3);
	return k; 
}
int main(){
	int a,b;
	float x; 
	printf("nhap cac so a,b,x: ");
	scanf("%d%d%f",&a,&b,&x) ;
	if(a+b != 0){
		printf("ket qua la : %f",th1(a,b,x)); 
	} 
	else if( a=b=0){
		printf("ket qua la 0"); 
	} 
	else{
		printf("ket qua la %f",th3(a,b,x)); 
	} 
	return 0; 
} 
