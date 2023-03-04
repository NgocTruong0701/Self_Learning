#include<stdio.h>
#include<math.h> 
int main(){
	int n;
	float x,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10;
	printf("Nhap so thuc x va so tu nhien n : ");
	scanf("%f%d",&x,&n);
	y1 = 1;
	y4 = 1;
	y5 = 1;
	y6 = 1; 
	int fact = 1; 
	int j;
	int k; 
	for(int i = 1;i <= n;i++){ 
		y1 = y1*(x+((float)1/pow(i,2))); 
		y4 += (float)pow(x,i)/i; 
		y5 += (float)(pow((-1),i)*pow(x,i)/i); 
	}
	for(int i = 0;i <=n;i++){
		y2 = y2 + pow(x,i);
		y3 = y3 + ((pow((-1),i))*(pow(x,i)));  	
	} 
	printf("\nvay y1 = %0.2f",y1);
	printf("\nvay y2 = %0.2f",y2);
	printf("\nvay y3 = %0.2f",y3);
	printf("\nvay y4 = %0.2f",y4);
	printf("\nvay y5 = %0.2f",y5);
	printf("\nvay y6 = %0.2f",y6);
	return 0; 
} 
