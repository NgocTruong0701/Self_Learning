#include<iostream>

using namespace std;

int main(){
	int n; 
	int dem = 0,tong=0;
	 
	cout<<"Nhap so n : ";
	cin>>n; 
	 
	while(n != 0){
		 dem++;
		 tong += n%10;
		 n = n / 10; 
	} 
	cout<<endl<<("chu so do co : ")<<dem<<" so";
	cout<<endl<<("Tong cac chu so cua so day : ")<<tong;
	
	return 0;
} 
