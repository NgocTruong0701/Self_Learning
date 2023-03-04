#include<stdio.h>
int main(){
	int n,c;
	int a[1000];
	int sum = 0; 
	printf("nhap so n :");
	scanf("%d",&n);
	for(int i = 0;i < n ; i++){
		while(n!=0){
			c = n % 10;
		    n = n / 10;
		    a[i] = c; 
		    sum +=a[i]; 
		} 
		printf("tong cac so trong n la : %d",sum); 
    }
    return 0; 
} 
