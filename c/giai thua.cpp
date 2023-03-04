#include<stdio.h>
#include<math.h> 
int main(){
	int n,m; 
	printf("Nhap hai so n va m : ");
	scanf("%d%d",&n,&m);
	int fact1 = 1; 
	int fact2 = 1;
	int z = n + m;
	int fact3 = 1; 
	float total ; 
	for(int i = 1; i <= n;i++){ 
		fact1 = fact1 * i; 
	} 
	for(int j = 1 ;j <= m ;j++){
		fact2 = fact2 * j; 
	} 
	for(int k = 1; k <= z ; k++ ){
		fact3 = fact3 * k; 
	} 
	total = (float)(fact1 + fact2)/fact3;
	printf("\nGia tri cua (%d! + %d!)/(%d + %d)! = %f",n,m,n,m,total);
	return 0; 
} 
