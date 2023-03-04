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
bool scp(int &n){
	int scp=sqrt(n);
	if(scp*scp==n){
		return true;
	} else {
	return false;
}}
void lietke(int &a,int&b){
	for(int i=a;i<=b;i++){
		if(scp(i)==true){
			printf("%d ",i);
		}
	}
}
int main(){
	int n,a,b;
	
	nhap(n);
	ve(a);
	if(scp(n)==true){
		printf("%d la so chinh phuong\n",n);
	} else {
	
		printf("%d ko la so chinh phuong\n",n);
	}
	ve(a);
	nhap(a);
	nhap(b);
	ve(a);
	printf("Cac so chinh phuong tu %d den %d la: ",a,b);
	lietke(a,b);
	
	
}
