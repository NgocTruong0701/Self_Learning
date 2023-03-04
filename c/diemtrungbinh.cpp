#include<stdio.h>
int main(){
	float dtb;
	printf("nhap diem trung binh : ");
	scanf("%f",&dtb);
	if (0 > dtb || 10 < dtb){
		printf("diem trung binh khong hop le, nhap lai."); 
	} 
	else{
		if(dtb >= 5.0) {
			printf("duoc len lop"); 
		}
		else {
			printf("O LAI LOP");
		} 
	} 
	return 0; 

} 
