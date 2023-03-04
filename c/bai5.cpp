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
int xuli(int n){
	int i,s=1 ;
	for(i=1;i<=n;i++){
		s=s*i;
	}
	return s;
}
int main(){
	int n,k,a,s,l;
	nhap(n);
	nhap(k);
	if(n<k){
		printf("Ko thoa man yeu cau de bai");
	}
	else {
	
	ve(a);
	printf("n! = %d! = %d\n",n,xuli(n));
	printf("k! = %d! = %d\n",k,xuli(k));
	printf("(n-k)! = (%d -%d)! = %d\n",n,k,xuli(n-k));
	ve(a);
	int b=xuli(n);
	int c=xuli(k);
	int d=xuli(n-k);
	float s;
	s=b/(float )(c*d);
	printf("C(n,k) = C(%d,%d) = %f",n,k,s);
	


	
}}
