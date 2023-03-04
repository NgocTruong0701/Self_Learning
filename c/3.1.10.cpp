#include<stdio.h>
#include<math.h>
int main(){
	int n,m,z;
	int fact1,fact2 ,fact3;
	float ketqua; 
	printf("Nhap 2 so n,m : ");
	scanf("%d%d",&n,&m); 
	z = m+n; 
	for(int i = 1; i <= n ;i++){
		fact1 =1 ; 
		fact1 = fact1 * i;
	}
	for(int j = 1; j <= m ; j++){
		fact2 = 1; 
		fact2 = fact2 * j; 
	} 
	for(int k = 1;k <= z;k++){
		fact3 = 1; 
		fact3 = fact3 *k; 
	} 
	printf("%d %d %d",fact1,fact2,fact3); 
	ketqua = (float)(fact1 + fact2)/fact3; 
	printf("\nGia tri bieu thuc (%d! + %d!)/(%d + %d)! = %d",n,m,n,m,ketqua);
	return 0;  
} 
