#include<stdio.h>
int  main(){
	float a,b;
	printf("nhap hai so : ");
	scanf("%f",&a);
	scanf("%f",&b); 
	printf("tong hai so la : %.1f\n",a + b);
	printf("hieu hai so la : %.1f\n",a - b);
	printf("tich hai so la : %.1f\n",a * b);
	if (b == 0){
		printf("khong co thuong"); 
	} 
	else {
		printf("thuong hai so la : %.1f",a / b); 
	} 
	return 0; 
} 
