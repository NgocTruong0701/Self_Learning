#include<stdio.h>
int main(){
	printf("Nghiem cua phuong trinh vo dinh 4x + 3y = 50 la : "); 
	for(int i = 0 ;i <= 50;i++){
		for(int j = 0;j <= 50;j++){
			if(4*i + 3*j == 50){
				 printf("(%d,%d)\n",i,j); 
			} 
		} 
	} 
	return 0; 
} 
