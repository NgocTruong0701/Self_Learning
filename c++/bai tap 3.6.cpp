#include<iostream>

using namespace std;

int main(){
	int n ;
	float s = 0; 
	do{
		cout<<"Nhap so nguyen duong n : ";
		cin>>n;
		if(n < 0){
			cout<<endl<<"Nhap khong dung yeu cau.Nhap lai "; 
		} 
	} 
	while(n < 0);
	
	for(int i = 1;i <=n;i++){
		s +=(float)1/i; 
	} 
	
	cout<<endl<<"S = "<<s;
	 
	return 0; 
} 
