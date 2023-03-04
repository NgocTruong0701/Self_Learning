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
bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) 
        if (n % i == 0)
            return false;
    return true;
}
void viet(int &n){
	for(int i=0;i<n;i++){
		if(isPrime(i)==true){
			printf("%d",i);
		} 
	}
}
int main(){
	int n,a;
	nhap(n);
	ve (a);
	if(isPrime(n)==true){
		printf("%d la so nguyen to\n",n);
	} else {
		printf("%d ko la so nguyen to\n",n);
	}
	printf("Cac so nguyen to be hon n la: ");
	viet(n);
}
