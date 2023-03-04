#include<stdio.h>
#include<math.h>
int main(){
	float x ,y1,y2 ;
	printf("Nhap so x : ");
	scanf("%f",&x);
	y1 = 4*(pow(x,2)+13*x+4);
	y2 = sin(M_PI*pow(x,2)) +pow(x,2) + 1 + exp(2*x) + cos(M_PI/(x*4));
	printf("\ny1 = %0.2f",y1);
	printf("\ny2 = %0.2f",y2);
	return 0; 
} 
