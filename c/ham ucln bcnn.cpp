#include<stdio.h>
int ucln(int a,int b);
float bcnn(int a,int b);
int ucln(int a,int b){
	while(a != b){
		if(a >b){
			a -= b; 
		} 
		else{
			b -=a; 
		} 
	}
	return a; 
} 
float bcnn(int a,int b){
	return (float)(a*b)/ucln(a,b); 
} 
int main(){
	int x,y;
	printf("nhap hai so : ");
	scanf("%d%d",&x,&y);
	printf("\nUCLN cua %d va %d la %d",x,y,ucln(x,y)); 
	printf("\nBCNN cua %d va %d la %0.2f",x,y,bcnn(x,y));
} 
 
