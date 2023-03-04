#include<stdio.h>
int check(int n);
int main(){
	int n;
	printf("nhap so bat ki : ");
	scanf("%d",&n);
	int flag = check(n);
	if(flag == 1){
		printf("day la so nguyen to."); 
	} 
	else{
		printf("day khong la so nguyen to"); 
	} 
} 
int check(int n){
	for(int i = 2 ;i <= n/2;i++){
		if(n % i == 0){
			return 0; 
		} 
	} 
	return 1; 
} 
