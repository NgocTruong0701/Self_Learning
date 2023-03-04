#include<stdio.h>
int main(){
	int a,b;
	printf("nhap hai so a ,b :"); 
	scanf("%d%d",&a,&b); 
	while(a != b){
		if (a > b){
			a = a - b; 
		} 
		else {
			b = b - a; 
		} 
	} 
	printf("uoc chung lon nhat la %d",a);
	return 0; 
} 
