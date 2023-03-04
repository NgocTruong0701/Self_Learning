#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float y6 ,x,fact; 
	scanf("%f%d",&x,&n); 
	for(int i = 1;i <= n ;i++){
		for(int j = 1 ;j <= i;j++ ) {
			fact = fact *j ;
		}
	} 
	 
	printf ("%f",y6);
} 
