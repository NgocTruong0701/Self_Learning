#include<stdio.h>
int main(){
	unsigned int n;
	printf("Nhap so tien : ");
	scanf("%d",&n);
	for(int i = 0 ;i <= n ;i++){
		for(int j = 0; j <= n;j++){
			for(int k = 0; ;k <= n;-k++){
				for(int x = 0; x <= n;x++){
					if(i*10 + j*5 + k*2 + x*1 == n){
						printf("\nSo tien nhap vao la %d vay co %d to 10d,co %d to 5d,%d to 2d va %d to 1d",n,i,j,k,x); 
					} 
				} 
			} 
		} 
	} 
	return 0; 
} 
