#include<iostream>

using namespace std;

int main(){
	int n,m; 
	int tongc = 0 , tongl = 0; 
	do{
		cout<<"Nhap so nguyen duong n : ";
		cin>>n;
		cout<<endl<<"Nhap so nguyen duong m : ";
		cin>>m;
		if(n < 0 || m < 0){
			cout<<endl<<"Nhap khong dung yeu cau.Nhap lai "; 
		} 
	} 
	while(n < 0 || m < 0);
	
	for(int i = -n ; i <= m;i++){
		if(i % 2 == 0 && i >= 0){
			tongc += i; 
		} 
	} 
	for(int j = -m ; j <=3*n ;j++){
		if(j % 2 != 0 && j % 3 == 0){
			tongl += j; 
		}
	} 
	
	cout<<endl<<"Tong so chan duong trong doan [-n,m] : "<<tongc; 
	cout<<endl<<"Tong so le chia het cho 3 trong doan [-m,3n] : "<<tongl; 
	
	return 0; 
} 
