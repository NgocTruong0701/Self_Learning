#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap hai so a va b :");
	scanf("%d%d",&a,&b);
	if(a >= b){
		printf("\Min :%d,Max :%d",b,a); 
	} 
	else{
		printf("\Min :%d,Max :%d",a,b); 
	} 
	return 0; 
} 
