#include<stdio.h>
int main (){
	int n , m ;
	int arr[100][100];
	printf("nhap so hang va so cot cua ma tran : ");
	scanf("%d%d",&n ,&m);
	printf("\nPhan tu cua mang la :"); 
	for(int i = 0 ; i < n ; i++){
		for (int  j = 0 ; j < m ; j ++){
			scanf("%d",&arr[i][j]); 
		} 
	} 
	for(int i = 0 ; i < n ; i++){
		for (int j = 0 ; j < m ; j++){
			printf("\narr[%d][%d] : %d\n",i,j,arr[i][j]); 
		} 
	} 
	return 0; 
} 
