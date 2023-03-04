#include<stdio.h>
#include<math.h> 

int main(){
	unsigned int r;
	printf("Nhap ban kinh hinh tron : ");
	scanf("%d",&r);
	int chu_vi ,dien_tich;
	chu_vi = 2*M_PI;
	dien_tich = M_PI*r*r;
	printf("\nChu vi cua hinh tron la : %d,dien tich cua hinh tron la : %d",chu_vi,dien_tich);
	return 0; 
} 
