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
int sht(int &n){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		 return true;
		 
	} else return false;
}

int main(){
	int n,a;
	nhap(n);
	ve(a);
	if(n<0) {printf("nhap lai n: \n");
	} else{
		if(sht(n)==true){
			printf("%d la so hoan thien ",n);
		} else {
			printf("%d ko la so hoan thien",n);
		}
	}
	
}
