#include<stdio.h>
int main(){
	int n;
	printf("so phan tu trong mang la : ") ;
	scanf("%d",&n);
	int a[1000];
	for(int i =0 ; i < n ; i++){
		scanf("%d",&a[i]); 
	} 
	
	
	int max  = a[0];
	for (int i = 0 ; i < n ; i++){
		if ( a[i] > max){
			max = a[i]; 
		} 
	} 
	printf("so lon nhat trong mang la %d",max);
	return 0; 
} 

