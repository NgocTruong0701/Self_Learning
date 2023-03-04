#include<stdio.h>
int giaithua(int n);
int giaithua(int n){
	int sum = 1;
	for(int i = 1;i <=n;i++){
		sum *= i; 
	} 
	return sum; 
}
int tohop(int n,int k){
	return giaithua(n)/(giaithua(k)*giaithua(n-k)); 
} 
int main(){
	int n;
	printf("nhap so hang cua tam giac : \n");
	scanf("%d",&n);
	for(int i = 0 ; i <= n;i++){
		for(int j = 0;j <=i;j++){
			printf("%d ",tohop(i,j)); 
		} 
		printf("\n");
	} 
	return 0; 
} 
