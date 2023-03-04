#include<stdio.h>
void nhap();
int a,b,c; 
void nhap(){
	printf("nhap 3 so : ");
	scanf("%d%d%d",&a,&b,&c);
} 
int main(){
	nhap();
	printf("3 so %d %d %d",a,b,c);
} 
