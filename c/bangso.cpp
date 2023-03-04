#include<stdio.h>
int main(){
	int i = 0;
	do{
		printf("%d ",i);
		i++; 
		if(i % 10 == 0){
			printf("\n"); 
		} 
	} 
	while(i < 100); 
} 
