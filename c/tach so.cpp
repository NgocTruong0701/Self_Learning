#include<stdio.h>
int main(){
	int n,c;
	int sum = 0; 
	printf("nhap so n :");
	scanf("%d",&n);
	while(n!=0){
		c = n % 10;
	    n = n / 10;
	    sum +=c; 
	} 
	printf("tong cac so trong n la : %d",sum); 
    return 0; 
} 
