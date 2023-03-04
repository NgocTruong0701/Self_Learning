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
    printf("----------Loi Giai----------\n");
}
int xuli(int &n){
    int s=1;
	for(int i=1;i<=n;i++){
		 s=s*i;
	}
	return s;
	
}

int main(){
	int n;
	
	nhap(n);
	xuat(n);
	ve(n);
	printf("%d ! =  %d",n,xuli(n));
}

