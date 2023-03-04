#include<bits/stdc++.h>

using namespace std;
void nhap(int &n){
	printf("Nhap so : ");
	scanf("%d",&n);
}
void xuat(int &n){
	printf("Xuat: %d\n",n);
}
void ve(int a){
    printf("---------Loi Giai-----------\n");
}
int xuli(int &n,int &x){
	int s=pow(x,n);
	return s;
}
int main(){
	int n,x,a;
	nhap(x);
	nhap(n);
	ve(a);
	printf("%d ^ %d = %d",x,n,xuli(n,x));
	
}
