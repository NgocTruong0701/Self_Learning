#include<stdio.h>
int main(){
	int n,m;
	int arr[100][100];
	scanf("%d%d",&n,&m); 
	for(int i = 0 ; i < n;i++){
		for(int j = 0 ; j < m ; j ++){
			scanf("%d", &arr[i][j]); 
		} 
	} 
	int sum = 0 ;
	for(int i = 0;i < n; i++){
		for(int j = 0 ; j< m;j++){
			if(arr[i][j] % 5 == 0){
				sum += arr[i][j]; 
			}	
		} 
	}
	printf("%d ",sum); 
	return 0; 
}  
