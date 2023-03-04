#include<stdio.h>
int main(){
	int n;
	float  total =  0;   
	scanf("%d",&n);
	if ( n == 1){
		printf("total = 1"); 
	} 
	else{
		for(int  i = 1; i <= n ; i++){ 
			total = total + 1/(float)i;
	    }
	    printf("total = %f",total);
	}  
	return 0 ; 
} 
