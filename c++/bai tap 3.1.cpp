#include<iostream>

using namespace std;

int main(){
	int n;
	int tongc = 0 , tongl = 0; 
	
	cout<<"Nhap so n : ";
	cin>>n;
	
	while(n<0){
		cout<<"Nhap lai n";
		cin>>n; 
	} 
	
	for(int i = 1 ; i <= n ;i++){
		if(i % 2 == 0){
			tongc += i; 
		} 
		else{
			tongl += i ; 
		} 
	} 
	
	cout<<endl<<"Tong cac so chan tu 1 den n la : "<<tongc;
	cout<<endl<<"Tong cac so le tu 1 den n la : "<<tongl; 
	
	return 0; 
} 
