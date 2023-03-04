#include<stdio.h>
int n; 
void input(){
	do{
		printf("Nhap so hang (<=10) : ");
		scanf("%d",&n); 
	} 
	while(n > 10); 
} 
void xuly(int n){
	for(int i = 1;i <=n;i++){
		for(int j = 1;j<=i-1;j++){
			printf(" "); 
		} 
		for(int k = i+1;k <=i+1;k++){
			printf("%d ",k); 
		} 
		for(int l = i+1;l >=1;l--){
			printf("%d ",l); 
		} 
		printf("\n");
	} 
}
int main(){
	input();
	xuly(n);
	return 0; 
} 
