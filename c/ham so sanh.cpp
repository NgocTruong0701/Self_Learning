#include<stdio.h>
int sosanh(int a, int b);
int sosanh(int a,int b){
	if(a < b){
		return a; 
	} 
	return b; 
} 
int main(){
	int x,y,z; 
	printf("nhap 3 so : ");
	scanf("%d%d%d",&x,&y,&z);
	int g = sosanh(x,y); 
	int h = sosanh(y,z);
	printf("\nSo nho hon trong 2 so %d va %d la %d",x,y,sosanh(x,y));
	printf("\nSo nho hon trong 2 so %d va %d la %d",y,z,sosanh(y,z)); 
	printf("\nSo nho hon trong 3 so %d , %d va %d la %d",x,y,z,sosanh(g,h));
	return 0; 
} 
