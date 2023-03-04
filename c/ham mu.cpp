#include<stdio.h>
#include<math.h> 
int mu(int a,int b);
int mu(int a,int b){
	int trunggian =a; 
	for(int i =1;i < b;i++){
		trunggian *= a; 
	} 
	return trunggian ; 
} 
int main(){
	int x,y;
	printf("nhap so : ");
	scanf("%d",&x);
	printf("\nnhap so mu : ");
	scanf("%d",&y);
	printf("%d mu %d la : %d ",x,y,mu(x,y)); 
	return 0; 
} 
