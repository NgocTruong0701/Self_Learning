#include<stdio.h>
int main(){
	int n;
	int sum = 0; 
	scanf("%d",&n);
	for(int i = 0; i <= n ; i++){
		sum += i; 
	}
	printf("tong day tren la : %d",sum);
	return 0; 
} 
