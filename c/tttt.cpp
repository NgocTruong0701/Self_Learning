#include <stdio.h>
int main(){
	int i, j, z, y,n;
	printf("Nhap n : ");
	scanf("%d",&n);
	if(n <=10){
		for(i = 0; i<= n; i++){
			for(j = 0; j <= n - i+1 ; j++){
				printf(" ");
			}
			for( y = i;y < 2*i; y++){
				printf("%d ", y % 10);
			}
			for(z = y-2; z >= i; z --){
		    	printf("%d ", z%10);
			}
		
			printf("\n");
		}
	}
}
